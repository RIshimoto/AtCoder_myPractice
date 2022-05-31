import sys
sys.setrecursionlimit(10**6)
N, M = map(int, input().split())
graph1 = [[] for _ in range(N)]
graph2 = [[] for _ in range(N)]
for _ in range(M):
    A, B = map(int, input().split())
    A, B = A - 1,  B - 1
    graph1[A].append(B)
    graph2[B].append(A)

# step1
leaf = [0] * N
visited = [False] * N
n = 0
def dfs(v, prev=-1):
    global n
    visited[v] = True
    for u in graph1[v]:
        if visited[u] == True:
            continue
        dfs(u, v)
    n += 1
    leaf[v] = (n, v)

for i in range(N):
    if visited[i] == False:
        dfs(i)

# step2
visited = [False] * N
def dfs(v, prev=-1):
    visited[v] = True
    cnt = 1
    for u in graph2[v]:
        if visited[u] == True:
            continue
        cnt += dfs(u, v)
    return cnt

ans = 0
for n, v in sorted(leaf, reverse=True):
    if visited[v] == False:
        cnt = dfs(v)
        ans += cnt * (cnt - 1) // 2
print(ans)
