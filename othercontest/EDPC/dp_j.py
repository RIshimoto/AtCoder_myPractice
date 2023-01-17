import sys
from collections import defaultdict
sys.setrecursionlimit(10**6)
N = int(input())
A = list(map(int, input().split()))

c = defaultdict(lambda:0)
for a in A:
    c[a] += 1 

dp = [[[-1] * (N+1) for _ in range(N+1)] for _ in range(N+1)]
dp[0][0][0] = 0
def f(c1, c2, c3):
    if dp[c1][c2][c3] != -1:
        return dp[c1][c2][c3]
    c0 = N - c1 - c2 - c3
    ret = 1 / (1 - c0 / N)
    if c1 > 0: ret += f(c1 - 1, c2, c3) * c1 / N / (1 - c0 / N)
    if c2 > 0: ret += f(c1 + 1, c2 - 1, c3) * c2 / N / (1 - c0 / N)
    if c3 > 0: ret += f(c1, c2 + 1, c3 - 1) * c3 / N / (1 - c0 / N)
    dp[c1][c2][c3] = ret
    return ret

ans = f(c[1], c[2], c[3])
print(ans)
