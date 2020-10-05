# Cut and clean (Fewest moves)
def cut_link(diz, ga_nodes, si, prev):
    # Default cut values
    n1 = ga_nodes[0]
    n2 = diz[ga_nodes[0]]
    # Try to cut out agent if few connections
    if len(diz[si]) <= 2:
        for i in range(len(diz[si])):
            # Make sure to cut ahead of agent
            if diz[si][i] != prev:
                n1 = si
                n2 = diz[si][i]
    else:
        # Else cut links with few connecs to later trap agent
        for i in diz[ga_nodes[0]]:
            if len(diz[i]) <= 3:
                n1 = ga_nodes[0]
                n2 = i
    # Overwrite to cut gateway-agent if connected
    for i in ga_nodes:
        if si in diz[i]:
            n1 = si
            n2 = i
            break

    # Output link to severe        
    print("{} {}".format(n1,n2))

    # Clean dictionary and list
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

# Store gateway node
for i in range(e):
    ga_nodes.append(int(input()))

prev = -1
# Game loop
while True:
    si = int(input())  # Skynet agent position
    cut_link(diz, ga_nodes, si, prev)
    prev = si