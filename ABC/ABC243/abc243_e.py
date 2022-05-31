import heapq
N, M = map(int, input().split())
ABC = [map(int, input().split()) for _ in range(M)]
A, B, C = [list(i) for i in zip(*ABC)]

dp = [[float('inf') for _ in range(N)] for _ in range(N)]
for i in range(M):
    a, b, c = A[i]-1, B[i]-1, C[i]
    dp[a][b] = dp[b][a] = c

for k in range(N):
    for i in range(N):
        for j in range(N):
            dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j])

ans = 0
for i in range(M):
    a, b, c = A[i]-1, B[i]-1, C[i]
    unused = 0
    for j in range(N):
        if dp[a][j] + dp[j][b] <= c:
            unused = 1
    ans += unused
print(ans)
