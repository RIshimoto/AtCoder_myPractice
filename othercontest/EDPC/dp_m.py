N, K = map(int,input().split())
a = list(map(int, input().split()))
MOD = 10**9+7

dp = [[0] * (K + 1) for _ in range(N+1)]
dp[0][0] = 1
for i in range(1, N+1):
    cum = [0] * (K+1+1)
    for j in range(1, K+1+1):
        cum[j] = (cum[j-1] + dp[i-1][j-1]) % MOD

    for j in range(K+1):
        dp[i][j] = (cum[j+1] - cum[max(0, j-a[i-1])] + MOD) % MOD

ans = dp[N][K]
print(ans)
