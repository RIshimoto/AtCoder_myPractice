import sys
from collections import deque
input = sys.stdin.readline
INF = 100000000
# up 0
# down 1
# left 2
# right 3
def solve():
    H, W = map(int, input().split())
    rs, cs = map(int, input().split())
    rt, ct = map(int, input().split())
    S = [list(input()) for _ in range(H)]
    rs, cs, rt, ct = rs-1, cs-1, rt-1, ct-1
    dist = [[[INF] * 4 for _ in range(W)] for _ in range(H)]
    dque = deque()
    for direct in range(4):
        dist[rs][cs][direct] = 0
        dque.append((rs, cs, direct))

    while len(dque) != 0:
        x, y, j = dque.pop()
        if x == rt and y == ct:
            break
        for i, (dx, dy) in enumerate([(-1, 0), (1, 0), (0, -1), (0, 1)]):
            nx, ny = x + dx, y + dy
            if 0 <= nx < H and 0 <= ny < W and S[nx][ny] == '.':
                if i == j:
                    if dist[x][y][j] < dist[nx][ny][i]:
                        dist[nx][ny][i] = dist[x][y][j]
                        dque.append((nx, ny, i))
                else:
                    if dist[x][y][j] + 1 < dist[nx][ny][i]:
                        dist[nx][ny][i] = dist[x][y][j] + 1
                        dque.appendleft((nx, ny, i))
    print(min(dist[x][y][j]))

if __name__ == '__main__':
    solve()
