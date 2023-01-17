N, M = map(int, input().split())
A = [int(input()) for _ in range(N)]

cnts = [0] * (M+1)
sum = [[0] * (N+1) for _ in range(M+1)]
for i, a in enumerate(A):
    sum[a][i+1] += 1
    cnts[a] += 1

for m in range(1, M+1):
    for i in range(N):
        sum[m][i+1] += sum[m][i]

dp = [float('inf')] * (1<<M)
dp[0] = 0
for s in range(1<<M):
    cum = 0
    for j in range(M):
        if (s & (1<<j)) != 0:
            cum += cnts[j+1]

    for j in range(M):
        if (s & (1<<j)) != 0:
            continue
        dp[s|(1<<j)] = min(dp[s|(1<<j)], dp[s]+(cnts[j+1]-(sum[j+1][cum+cnts[j+1]]-sum[j+1][cum])))
ans = dp[(1<<M)-1]
print(ans)
