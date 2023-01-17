from collections import defaultdict
N, M = map(int, input().split())
X = list(map(int, input().split()))
bonus = defaultdict(lambda: 0)
for _ in range(M):
    C, Y = map(int, input().split())
    bonus[C] = Y

dp = [[0] * (N+1) for _ in range(N+1)]
for i in range(N):
    for cnt in range(i+1):
        dp[i+1][cnt+1] = max(dp[i+1][cnt+1], dp[i][cnt]+X[i]+bonus[cnt+1])
        dp[i+1][0] = max(dp[i+1][0], dp[i][cnt])
print(max(dp[N]))
