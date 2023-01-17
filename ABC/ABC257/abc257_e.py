N = int(input())
C = list(map(int, input().split()))

mnC = C[0]
mnC_i = 0
for i, c in enumerate(C, 1):
    if c <= mnC:
        mnC = c
        mnC_i = i
keta = N // mnC
ans = [mnC_i] * keta
N %= mnC
for pos in range(keta):
    if N == 0:
        break
    for i, c in enumerate(reversed(C)):
        cost = 9 - i
        if N >= c - mnC:
            ans[pos] = cost
            N -= c - mnC
            break
print(''.join(map(str, ans)))
