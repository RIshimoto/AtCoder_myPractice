K = input()
D = int(input())
MOD = 10**9+7

N = len(K)
dp = [[[0] * D for _ in range(2)] for _ in range(N+1)]
dp[0][0][0] = 1
for i in range(N):
    for j in range(D): 
        for dig in range(10):
            dp[i+1][1][(j+dig)%D] += dp[i][1][j]
            dp[i+1][1][(j+dig)%D] %= MOD

        for dig in range(int(K[i])):
            dp[i+1][1][(j+dig)%D] += dp[i][0][j]
            dp[i+1][1][(j+dig)%D] %= MOD

        dp[i+1][0][(j+int(K[i]))%D] += dp[i][0][j]
        dp[i+1][0][(j+int(K[i]))%D] %= MOD
ans = (dp[N][0][0] + dp[N][1][0] - 1) % MOD
print(ans)
