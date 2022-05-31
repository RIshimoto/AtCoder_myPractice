from collections import deque
N = int(input()) 
Ax, Ay = map(int, input().split())
Bx, By = map(int, input().split())
S = [list(input()) for _ in range(N)]

INF = 1e8
dxy = [(1, 1), (1, -1), (-1, -1), (-1, 1)] # right_up, right_down, left_down, left_up
Ax, Ay = Ax-1, Ay-1
Bx, By = Bx-1, By-1
que = deque()
dist = [[[INF] * 4 for _ in range(N)] for _ in range(N)]
for d in range(4):
    que.append((Ax, Ay, d))
    dist[Ax][Ay][d] = 1
ans = -1
while len(que) != 0:
    x, y, d = que.pop()
    if x == Bx and y == By:
        print(dist[x][y][d])
        exit()
    for nd, (dx, dy) in enumerate(dxy):
        nx, ny = x + dx, y + dy
        if (0 <= nx < N and 0 <= ny < N) and S[nx][ny] != '#':
            if nd == d:
                if dist[nx][ny][nd] > dist[x][y][d]:
                    dist[nx][ny][nd] = dist[x][y][d]
                    que.append((nx, ny, nd))
            else:
                if dist[nx][ny][nd] > dist[x][y][d] + 1:
                    dist[nx][ny][nd] = dist[x][y][d] + 1
                    que.appendleft((nx, ny, nd))
print(-1)
