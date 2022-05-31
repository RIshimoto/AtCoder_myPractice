from bisect import bisect_right
N, K = map(int, input().split())
A = list(map(int, input().split()))

B = []
for i in range(K, N):
    B.append([A[i], i])
B.sort()

for i in range(len(B)-1, 0, -1): 
    if B[i][1] < B[i-1][1]:
        B[i-1][1] = B[i][1]

key = [r[0] for r in B]
ans = float('inf')
for i in range(K):
    j = bisect_right(key, A[i])
    if j < N-K:
        _, k = B[j]
        ans = min(ans, k - i)
if ans == float('inf'):
    ans = -1
print(ans)
