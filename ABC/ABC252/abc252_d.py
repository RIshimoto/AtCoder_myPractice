N = int(input())
A = list(map(int, input().split()))

import math
def comb(n, r):
    if n < r:
        return 0
    return math.factorial(n) // (math.factorial(n - r) * math.factorial(r))

MAX = 2*10**5+1
cnts = [[] for _ in range(MAX)]
for i, a in enumerate(A):
    cnts[a].append(i)
ans = comb(N, 3)
for s in set(A):
    m = len(cnts[s])
    ans -= comb(m, 2) * (N - m) + comb(m, 3)
print(ans)
