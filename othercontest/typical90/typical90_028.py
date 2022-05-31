N = int(input())

H = 1001
W = 1001
a = [[0 for _ in range(W)] for _ in range(H)]
for _ in range(N):
    lx, ly, rx, ry = map(int, input().split())
    a[lx][ly] += 1
    a[rx][ry] += 1
    a[lx][ry] -= 1
    a[rx][ly] -= 1

for i in range(H):
    for j in range(1, W):
        a[i][j] += a[i][j-1]

for i in range(1, H):
    for j in range(W):
        a[i][j] += a[i-1][j]

ans = [0] * (N + 1)
for i in range(H):
    for j in range(W):
        if a[i][j] > 0:
            ans[a[i][j]] += 1
[print(ans[i]) for i in range(1, N+1)]
