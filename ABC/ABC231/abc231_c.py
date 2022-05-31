N, Q = map(int, input().split())
A = list(map(int, input().split()))
A = sorted(A)
import bisect

for _ in range(Q): 
    x = int(input())
    print(N - bisect.bisect_left(A, x))
