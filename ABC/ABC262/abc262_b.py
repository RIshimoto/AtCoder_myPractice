N, M = map(int, input().split())
graph = [[] for _ in range(N)]
for _ in range(M):
    U, V = map(int, input().split())
    U, V = U - 1, V - 1
    graph[U].append(V)
    graph[V].append(U)

cnt = 0
for a in range(N):
    for b in range(a+1, N):
        for c in range(b+1, N):
            if b in graph[a] and c in graph[b] and a in graph[c]:
                cnt += 1
print(cnt)
