N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))

dp = [[0 for _ in range(46)] for _ in range(4)]
dp[0][0] = 1
for i, x in enumerate([A, B, C]):
    for k in range(46):
        if dp[i][k] > 0:
            for j in range(N):
                dp[i+1][(x[j]+k)%46] += dp[i][k]
print(dp[3][0])
