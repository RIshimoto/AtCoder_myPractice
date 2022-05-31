from bisect import bisect
N, M = map(int, input().split())

graph = [[] for _ in range(N)]
for _ in range(M):
    a, b = map(int, input().split())
    a, b = a-1, b-1
    graph[a].append(b)
    graph[b].append(a)
ans = 0
for i in range(N):
    graph[i].sort()
    flag = False
    if len(graph[i]) > 0 and graph[i][0] < i: 
        flag = True
    if len(graph[i]) > 1 and graph[i][1] < i:
        flag = False
    if flag:
        ans += 1
print(ans)
