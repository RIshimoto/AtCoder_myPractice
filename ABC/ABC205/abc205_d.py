import bisect
N, Q = map(int, input().split())
A = list(map(int, input().split()))

A.sort()
c = [0] * (N + 1)
for i in range(1, N+1):
    c[i] = A[i - 1] - i 
print(c)

a = [0] + A
for _ in range(Q):
    k = int(input())
    if c[N] < k:
        ans = a[N] + (k - c[N])
    else:
        i = bisect.bisect_left(c, k)
        print(i)
        ans = (a[i] - 1) - (c[i] - k)
    print(ans)
