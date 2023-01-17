N = int(input())
A = []
for _ in range(N):
    A.append(list(input()))

ans = 0
def dfs(x, y, dx, dy, a, cnt=0):
    if cnt == N-1:
        global ans 
        ans = max(ans, int(a))
        return

    nx = x + dx
    ny = y + dy
    if nx < 0:
        nx = N-1
    elif nx >= N:
        nx = 0

    if ny < 0:
        ny = N-1
    elif ny >= N:
        ny = 0

    dfs(nx, ny, dx, dy, a+A[nx][ny], cnt+1)
    return

for i in range(N):
    for j in range(N):
        for dx in range(-1, 2):
            for dy in range(-1, 2):
                if dx == 0 and dy == 0:
                    continue
                dfs(i, j, dx, dy, A[i][j])
print(ans)
