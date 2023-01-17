N, M = map(int, input().split())

graph = [[] for _ in range(N)]
out = [0] * N
for _ in range(M):
    u, v = map(int, input().split())
    u, v = u-1, v-1
    graph[v].append(u)
    out[u] += 1

que = []
for i in range(N):
    if out[i] == 0:
        que.append(i)
ans = N
while len(que) != 0:
    ans -= 1
    u = que.pop()
    for v in graph[u]:
        out[v] -= 1
        if out[v] == 0:
            que.append(v)
print(ans)
