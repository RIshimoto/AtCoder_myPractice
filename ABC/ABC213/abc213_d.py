import sys
sys.setrecursionlimit(10**6)

N = int(input())

graph = [[] for _ in range(N)]
for _ in range(N-1):
    A, B = map(int, input().split())
    A -= 1
    B -= 1
    graph[A].append(B)
    graph[B].append(A)

for i in range(N):
    graph[i].sort()

visited = [False] * N
ans = [1]
def dfs(v):
    visited[v] = True
    for u in graph[v]:
        if visited[u]:
            continue
        ans.append(u+1)
        dfs(u)
        ans.append(v+1)
dfs(0)
print(*ans)
