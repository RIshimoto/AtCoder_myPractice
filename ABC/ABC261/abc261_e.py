from collections import deque
N, C = map(int, input().split())
TA = [map(int, input().split()) for _ in range(N)]
T, A = [list(i) for i in zip(*TA)]

MAXBIT = 30

andBit = [0] * (MAXBIT)
orBit  = [0] * (MAXBIT)
xorBit = [0] * (MAXBIT)
X = list(map(int, bin(C)[2:].zfill(MAXBIT)))
for i, (t, a) in enumerate(zip(T, A), 1):
    for j in range(MAXBIT):
        k = MAXBIT - j - 1
        if t == 1:   # AND
            if (a >> j) & 1 == 0:
                andBit[k] = i
                xorBit[k] = 0
        elif t == 2: # OR
            if (a >> j) & 1 > 0: 
                orBit[k] = i
                xorBit[k] = 0
        elif t == 3: # XOR
            if (a >> j) & 1 > 0:
                xorBit[k] += 1
    for j in range(MAXBIT):
        if andBit[j] < orBit[j]:
            X[j] = 1
        elif andBit[j] > orBit[j]:
            X[j] = 0
        X[j] = (X[j] + xorBit[j]) % 2
    print(int(''.join(map(str, X)), 2))
