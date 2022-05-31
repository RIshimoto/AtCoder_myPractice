N, M = map(int, input().split())
graph = [[]]
for _ in range(M):
    u, v = map(int, input().split())
    u, v = u-1, v-1
    graph[u].append(v)
S, T = map(int, input().split())
S, T = S-1, T-1

que = []
for q in que:

