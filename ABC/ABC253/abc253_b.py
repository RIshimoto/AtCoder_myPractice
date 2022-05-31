H, W = map(int, input().split())
S = [input() for _ in range(H)]


def bfs(x, y):
    dist = [[float('inf') for _ in range(W)]for _ in range(H)]

    que = [(x, y)]
    dist[x][y] = 0
    for q in que:
        x, y = q
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]: 
            nx, ny = x + dx, y + dy
            if 0 <= nx < H and 0 <= ny < W:
                if dist[nx][ny] > dist[x][y] + 1:
                    dist[nx][ny] = dist[x][y] + 1
                    if S[nx][ny] == 'o':
                        return dist[nx][ny]
                    que.append((nx, ny))

for x in range(H):
    for y in range(W):
        if S[x][y] == 'o':
            ans = bfs(x, y)
            print(ans)
            exit()
