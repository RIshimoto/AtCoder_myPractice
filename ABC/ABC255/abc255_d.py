import bisect
N, Q = map(int, input().split())
A = list(map(int, input().split()))
A.sort()

sum = [0] * (N + 1)
for i in range(1, N+1):
    sum[i] += sum[i-1] + A[i-1]
for _ in range(Q):
    X = int(input())
    j = bisect.bisect_left(A, X)
    ans = 0
    ans += j * X - sum[j] 
    ans += (sum[N] - sum[j]) - (N - j) * X 
    print(ans)
