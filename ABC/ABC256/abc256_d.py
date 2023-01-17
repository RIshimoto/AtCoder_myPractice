from collections import defaultdict
N = int(input())
LR = [map(int, input().split()) for _ in range(N)]
L, R = [list(i) for i in zip(*LR)]

imos = defaultdict(lambda: 0)
for i in range(N):
    imos[L[i]] += 1
    imos[R[i]] += -1
l = 0
r = 0
cnt = 0
for k, v in sorted(imos.items()):
    if cnt == 0:
        l = k 
    cnt += v
    if cnt == 0:
        r = k
        print(l, k)

