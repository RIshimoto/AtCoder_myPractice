N, K = map(int, input().split())

dc = {}
for i in range(2, 2 * N+1):
    dc[i] = min(i - 1, N - (i - N) + 1)

ans = 0
for x in range(2, 2 * N + 1):
    y = x - K
    if not (2 <= y and y <= 2 * N):
        continue
    ans += dc[x] * dc[y]
print(ans)
