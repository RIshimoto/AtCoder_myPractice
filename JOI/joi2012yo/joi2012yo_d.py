from collections import defaultdict
N, K = map(int, input().split())
AB = [map(int, input().split()) for _ in range(K)]
A, B = [list(i) for i in zip(*AB)]

MOD = 10000

As = defaultdict(lambda:-1)
for a, b in zip(A, B):
    As[a] = b

dp = [[[0] * 4 for _ in range(4)] for _ in range(N+1)]
dp[0][0][0] = 1
for i in range(1, N+1):
    if As[i] != -1:
        B = As[i]
        for j in range(4):
            for k in range(4):
                if not(j == k == B):
                    dp[i][k][B] += dp[i-1][j][k]
    else:
        for j in range(4):
            for k in range(4):
                for l in range(1, 4):
                    if not(j == k == l):
                        dp[i][k][l] += dp[i-1][j][k]
ans = 0
for i in range(1, 4):
    ans += sum(dp[N][i])
print(ans % MOD)
