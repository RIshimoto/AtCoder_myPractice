from collections import deque

N, Q = map(int, input().split())
A = deque(map(int, input().split()))

r = 0
for _ in range(Q):
    T, x, y = map(int, input().split())
    x, y = (x - r - 1) % N, (y - r - 1) % N
    if T == 1:
        A[x], A[y] = A[y], A[x] 
    elif T == 2:
        r += 1
        r %= N
    elif T == 3:
        print(A[x])
