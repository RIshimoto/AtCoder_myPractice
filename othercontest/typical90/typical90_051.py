import bisect
import itertools
N, K, P = map(int, input().split())
A = list(map(int, input().split()))

a = A[:N//2]
ga  = []
for i in range(len(a)+1):
    g = []
    for s in itertools.combinations(a, i):
        g.append(sum(list(s)))
    ga.append(sorted(g))

b = A[N//2:]
gb  = []
for i in range(len(b)+1):
    g = []
    for s in itertools.combinations(b, i):
        g.append(sum(list(s)))
    gb.append(sorted(g))

ans = 0
for i in range(min(K+1, len(ga))):
    for j in range(len(ga[i])):
        if K - i < len(gb):
            ans += bisect.bisect_right(gb[K-i], P-ga[i][j])
print(ans)
