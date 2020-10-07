# Cut and clean (Fewest moves)
def cut_link(diz, ga_nodes, si, common):

    si_set = set(diz[si])
    nodeLinks, switch = 0, 0

    # Default cut values
    n1 = ga_nodes[0]
    n2 = diz[ga_nodes[0]][0]

    # Cut common nodes between gateways
    for i in ga_nodes:

        # 1) Cut if agent next to gateway
        if si in diz[i]:
            n1 = si
            n2 = i
            break

        # Else parse through common nodes
        elif len(common) > 0:
            ga_set = set(diz[i])

            # 2) Next node in common?
            if ga_set & common & si_set and switch < 3:
                switch = 2
                n1 = i
                for e in (ga_set & common & si_set):
                    n2 = e
                    break

            # 3) Best prehemptive cut (try anticipating agent's movement)
            elif ga_set & si_set and len(si_set) <= 4 and len(ga_set) > nodeLinks and switch < 2:
                nodeLinks = len(ga_set) # Make sure we cut from GW with most open links
                switch = 1
                if len(ga_set & si_set) == 1:
                    n1 = i
                    for e in (ga_set & si_set):
                        n2 = e
                        break
                # If gateway has multiple next nodes, check one node ahead
                else:
                    for e in (ga_set & si_set):
                        next_set = set(diz[e])
                        break
                    for j in ga_nodes:
                        ga_set2 = set(diz[j])
                        if ga_set2 & next_set:
                            n1 = j
                            for f in (ga_set2 & next_set):
                                n2 = f
                                break

            # 4) Cut any common node
            elif ga_set & common and switch < 1:
                n1 = i
                for e in (ga_set & common):
                    n2 = e
                    break

    # Output link to severe        
    print("{} {}".format(n1,n2))

    # Clean dictionary and list
    common.discard(n2)
    diz[n1].remove(n2)
    diz[n2].remove(n1)
    if len(diz[n1]) == 0: ga_nodes.remove(n1)
    if len(diz[n2]) == 0: ga_nodes.remove(n2)

    return

# - - - - - MAIN - - - - -

n, l, e = [int(i) for i in input().split()] # N of nodes/links/gateways
diz = {}
ga_nodes = []   # Gateway nodes list

# Store links
for i in range(l):
    n1, n2 = [int(j) for j in input().split()]
    if n1 not in diz: diz[n1] = [n2]  
    else: diz[n1].append(n2)
    if n2 not in diz: diz[n2] = [n1]  
    else: diz[n2].append(n1)


common, allCon = set(), set()
# Store gateway node
for i in range(e):
    ei = int(input())
    ga_nodes.append(ei)
    curr = set(diz[ei])
    common.update(curr&allCon)
    allCon.update(curr)

# Game loop
while True:
    si = int(input())  # Skynet agent position
    cut_link(diz, ga_nodes, si, common)