N = int(input())
sx, sy, tx, ty = map(int, input().split())
xyr = [map(int, input().split()) for _ in range(N)]
x, y, r = [list(i) for i in zip(*xyr)]
graph = [[] for _ in range(N)]
que = []
goal = []
for i in range(N):
    if (sx - x[i]) ** 2 + (sy - y[i]) ** 2 == r[i] ** 2:
        que.append(i)
    if (tx - x[i]) ** 2 + (ty - y[i]) ** 2 == r[i] ** 2:
        goal.append(i)
    for j in range(i+1, N):
        br = (r[i] + r[j]) ** 2
        dr = (r[i] - r[j]) ** 2
        if dr <= (x[i]-x[j])**2 + (y[i]-y[j])**2 <= br:
            graph[i].append(j)
            graph[j].append(i)

visited = [False] * N
for q in que:
    visited[q] = True
    if q in goal:
        print("Yes")
        exit()
    for p in graph[q]:
        if visited[p] == True:
            continue
        que.append(p)
print("No")
