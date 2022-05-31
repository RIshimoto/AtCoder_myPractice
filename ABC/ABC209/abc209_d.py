N, Q = map(int, input().split())

graph = [[] for _ in range(N)]
for _ in range(N-1):
    a, b = map(int, input().split())
    a, b = a - 1, b - 1
    graph[a].append(b)
    graph[b].append(a)

color = [-1] * N
color[0] = 0
que = [0]
for v in que:
    for u in graph[v]:
        if color[u] == -1:
            color[u] = 1 - color[v]
            que.append(u)

for _ in range(Q):
    c, d = map(int, input().split())
    if color[c - 1] == color[d - 1]:
        print("Town")
    else:
        print("Road")
