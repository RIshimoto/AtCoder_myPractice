N = int(input())
P = list(map(int, input().split()))
graph = [[] for _ in range(N+1)]

for i, p in enumerate(P, 2):
    graph[i].append(p)

def dfs(v=N, prev=-1, cnt=0):
    if v == 1:
        print(cnt)
        exit()
    for u in graph[v]:
        if u == prev:
            continue
        dfs(u, v, cnt+1)
dfs()
