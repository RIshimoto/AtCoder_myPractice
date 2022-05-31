import bisect
N = int(input())
A = list(map(int, input().split()))

MAX_N = 200001
idx = [[] for _ in range(MAX_N)]
for i in range(N):
    idx[A[i]].append(i)
Q = int(input())
for _ in range(Q):
    L, R, X = map(int, input().split())
    L, R = L-1, R-1
    l = bisect.bisect_left(idx[X], L)
    r = bisect.bisect_right(idx[X], R)
    ans = r - l
    print(ans)
    
