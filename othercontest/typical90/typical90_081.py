N, K = map(int, input().split())
AB = [map(int, input().split()) for _ in range(N)]
A, B = [list(i) for i in zip(*AB)]

mxA = max(max(A), K)+1
mxB = max(max(B), K)+1
sum = [[0 for _ in range(mxB+1)] for _ in range(mxA+1)]
for i in range(N):
    sum[A[i]+1][B[i]+1] += 1

for i in range(1, mxA+1):
    for j in range(1, mxB+1):
        sum[i][j] += sum[i-1][j]

for i in range(1, mxA+1):
    for j in range(1, mxB+1):
        sum[i][j] += sum[i][j-1]

ans = 0
for i in range(mxA-K):
    for j in range(mxB-K):
        ans = max(ans, sum[i][j]+sum[i+K+1][j+K+1]-sum[i][j+K+1]-sum[i+K+1][j])
print(ans)
