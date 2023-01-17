N, M = map(int, input().split())
edge = [0] * N
for _ in range(M):
    x, y = map(int, input().split())
    x -= 1
    y -= 1
    edge[x] |= 1 << (y)
dp = [0] * (1 << N)
dp[0] = 1
for s in range(1<<N):
    for i in range(N):
        if ((s>>i) & 1) == 0 and (edge[i] & s) == 0:
            dp[s|1<<i] += dp[s]
print(dp[-1])
