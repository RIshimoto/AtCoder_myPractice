import sys
from collections import defaultdict
sys.setrecursionlimit(10**6)
X = int(input())
MOD = 998244353

dp = defaultdict(lambda: -1)
def dfs(x):
    if dp[x] != -1:
        return dp[x]
    cnt = 1
    if x < x // 2 * (x - x // 2):
        cnt *= dfs(x // 2) 
        cnt *= dfs(x - x // 2) 
    else:
        cnt *= x
    dp[x] = cnt % MOD
    return dp[x]
ans = dfs(X) % MOD
print(ans)
