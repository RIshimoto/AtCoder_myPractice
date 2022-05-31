import sys
sys.setrecursionlimit(10**7)
N = int(input())

graph = [[] for _ in range(N)]
for _ in range(N-1):
    u, v = map(int, input().split())
    u, v = u-1, v-1
    graph[u].append(v)
    graph[v].append(u)

ans = [(-1, -1)] * N
n = 0
l = [0] * N
r = [0] * N
x = 1
def dfs(v, prev=-1):
    global x
    l[v] = x 
    for u in graph[v]:
        if u == prev:
            continue
        dfs(u, v)
    if len(graph[v]) == 1 and prev != -1:
        x += 1
    r[v] = x-1

if __name__ == '__main__':
    dfs(0)
    for i in range(N):
        print(l[i], r[i])
