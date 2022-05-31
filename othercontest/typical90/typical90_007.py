import bisect
N = int(input())
A = list(map(int, input().split()))
Q = int(input())

A = sorted(A)
A.append(float('inf'))
for _ in range(Q):
    B = int(input())
    pos = bisect.bisect_left(A, B) 
    print(min(abs(B - A[pos]), abs(B - A[pos-1])))
