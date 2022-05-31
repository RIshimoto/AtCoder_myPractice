import sys
sys.setrecursionlimit(10**6)
N = int(input())

graph = [[] for _ in range(N)]
edge = []
for _ in range(N-1):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    graph[a].append(b)
    graph[b].append(a)
    edge.append((a, b))

def solve():
    dp = [0] * N
    def dfs(v, prev=-1):
        dp[v] += 1
        for u in graph[v]:
            if u == prev:
                continue
            dp[v] += dfs(u, v)
        return dp[v]
    dfs(0)
    ans = 0
    for a, b in edge:
        A = min(dp[a], dp[b])
        ans += (N - A) * A
    print(ans)

if __name__ == '__main__':
    solve()

