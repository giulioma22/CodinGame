card_1, card_2 = [], []
order = "234567891JQKA"

# Player 1 cards
n = int(input())
for i in range(n):
    card_1.append(input()[0])
# Player 2 cards
m = int(input())
for i in range(m):
    card_2.append(input()[0])

turn = 0
draw = False

# Game loop
while True:

    # Draw game
    if draw:
        print("PAT")
        break
    # P1 wins GAME
    if len(card_2) == 0:
        print("1 " + str(turn))
        break
    # P2 wins GAME
    elif len(card_1) == 0:
        print("2 " + str(turn))
        break

    discard_1, discard_2 = [], []
    turn += 1

    discard_1.append(card_1.pop(0))
    discard_2.append(card_2.pop(0))

    # P1 wins ROUND
    if order.index(discard_1[-1]) > order.index(discard_2[-1]):
        card_1 += discard_1 + discard_2
    # P2 wins ROUND
    elif order.index(discard_1[-1]) < order.index(discard_2[-1]):
        card_2 += discard_1 + discard_2
    # Tie
    else:
        # War loop
        while True:

            # Draw game
            if len(card_1) < 4 or len(card_2) < 4:
                draw = True
                break

            # Update lists
            for k in range(4):
                discard_1.append(card_1.pop(0))
                discard_2.append(card_2.pop(0))

            # Another tie
            if discard_1[-1] == discard_2[-1]:
                continue
            # P1 wins war
            elif order.index(discard_1[-1]) > order.index(discard_2[-1]):
                card_1 += discard_1 + discard_2
                break
            # P2 wins war
            else:
                card_2 += discard_1 + discard_2
                break