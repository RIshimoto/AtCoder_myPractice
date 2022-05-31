import sys
sys.setrecursionlimit(10**6)

N, M = map(int, input().split())

graph = [[i] for i in range(N)]
for _ in range(M):
    A, B = map(int, input().split())
    A, B = A - 1, B - 1
    graph[A].append(B)

def dfs(v, visited):
    if visited[v]:
        return
    visited[v] = True
    for u in graph[v]:
        dfs(u, visited)

ans = 0
for i in range(N):
    visited = [False] * N
    dfs(i, visited)
    ans += sum(visited)
print(ans)
