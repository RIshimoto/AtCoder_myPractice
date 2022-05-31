N, Q = map(int, input().split())
A = list(map(int, input().split()))

diff = [0] * (N+1)
for i in range(1, N):
    diff[i] = A[i] - A[i-1]

ans = sum([abs(diff[i]) for i in range(N)])
for _ in range(Q):
    L, R, V = map(int, input().split())
    prev = abs(diff[L-1]) + abs(diff[R])
    if L >= 2:
        diff[L-1] += V
    if R <= N - 1:
        diff[R] -= V
    ans += (abs(diff[L-1]) + abs(diff[R])) - prev
    print(ans)
