import numpy as np
N = int(input())

graph = [[] for _ in range(N)]
for _ in range(N-1):
    A, B = map(int, input().split())
    A, B = A - 1, B - 1
    graph[A].append(B)
    graph[B].append(A)

def bfs(s):
    visited = [-1] * N
    que = [s]
    visited[s] = 0
    for q in que:
        for v in graph[q]:
            if visited[v] != -1:
                continue
            visited[v] = visited[q] + 1
            que.append(v)
    return visited

print(max(bfs(np.argmax(bfs(0))))+1)
