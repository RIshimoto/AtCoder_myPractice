from collections import defaultdict
N = int(input())
A = list(map(int, input().split()))

ans = 0
dp = [[[0] * (N+1) for _ in range(N+1)] for _ in range(N+1)]
dp[0][0][0] = 1
for i, a in enumerate(A):
    for j in range(N):
        for k in range(i+1):
            dp[i+1][(j+a)%(k+1)][k+1] += dp[i][j][k]
    ans += sum(dp[N][i+1][0])
print(ans)
