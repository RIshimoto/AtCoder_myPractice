import sys
sys.setrecursionlimit(10**6)
H, W = map(int, input().split())
c = [list(input()) for _ in range(H)]

ans = 0
visited = [[False for _ in range(W)] for _ in range(H)]
def backtrack(x, y, k=1):
    for (dx, dy) in [(1, 0), (-1, 0), (0, 1), (0, -1)]: 
        nx, ny = x+dx, y+dy
        if nx < 0 or H <= nx or ny < 0 or W <= ny: 
            continue
        if c[nx][ny] == '#':
            continue
        if visited[nx][ny] == True:
            continue

        if (nx, ny) == (start_x, start_y) and k >= 3:
            global ans
            ans = max(ans, k)
            continue
        visited[nx][ny] = True
        backtrack(nx, ny, k+1)
        visited[nx][ny] = False

for x in range(H):
    for y in range(W):
        start_x = x
        start_y = y
        backtrack(x, y)
print(ans if ans != 0 else -1)
