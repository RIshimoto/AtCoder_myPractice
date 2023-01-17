from itertools import product
h1, h2, h3, w1, w2, w3 = map(int, input().split()) 

cnt = 0
for l in product(range(1, 31), repeat=4):
    a0, a1, a3, a4 = l[0], l[1], l[2], l[3]
    a2 = h1 - (a0 + a1)
    a5 = h2 - (a3 + a4)
    a6 = w1 - (a0 + a3)
    a7 = w2 - (a1 + a4)
    if a2 > 0 and a5 > 0 and a6 > 0 and a7 > 0:
        if w3 - (a2 + a5) > 0 and h3 - (a6 + a7) > 0 and w3 - (a2 + a5) == h3 - (a6 + a7):
                cnt += 1
print(cnt)
