import sys
sys.setrecursionlimit(10**6)
N = int(input())
MOD = 10**9+7

graph = [[] for _ in range(N)]
for _ in range(N-1):
    x, y = map(int, input().split())
    x, y = x-1, y-1
    graph[x].append(y)
    graph[y].append(x)

visited = [False] * N
dp = [[-1] * 2 for _ in range(N)]
def dfs(i):
    visited[i] = True
    dp[i][0] = 1
    dp[i][1] = 1
    for j in graph[i]:
        if visited[j] == True:
            continue
        dfs(j)
        dp[i][0] = dp[i][0] * (dp[j][0] + dp[j][1]) % MOD
        dp[i][1] = dp[i][1] * dp[j][0]
    return
dfs(0)
ans = (dp[0][0] + dp[0][1]) % MOD
print(ans)
