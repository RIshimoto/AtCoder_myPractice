H, W = map(int, input().split())
C = []
for _ in range(H):
    C.append(input())

ans = 0
que = []
dist = [[0 for _ in range(W)] for _ in range(H)]
dist[0][0] = 1
que.append((0, 0))
for q in que:
    x, y = q
    ans = max(ans, dist[x][y])
    for i, j in [(1, 0), (0, 1)]:
        nx, ny = x+i, y+j
        if nx < 0 or nx >= H or ny < 0 or ny >= W or C[nx][ny] == '#':
            continue
        if dist[nx][ny] >= dist[x][y] + 1:
            continue
        dist[nx][ny] = dist[x][y] + 1
        que.append((nx, ny)) 
print(ans)
