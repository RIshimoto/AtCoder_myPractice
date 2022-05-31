import math
N, Q = map(int, input().split())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]

X = [0] * N
Y = [0] * N
for i in range(N):
    X[i] = x[i] - y[i]
    Y[i] = x[i] + y[i]

x_max = 0
x_min = float('inf')
y_max = 0
y_min = float('inf')
for i in range(N):
    x_max = max(X[i], x_max)
    x_min = min(X[i], x_min)
    y_max = max(Y[i], y_max)
    y_min = min(Y[i], y_min)

for i in range(Q):
    q = int(input())
    q -= 1
    ans = max(max(abs(X[q] - x_min), abs(X[q] - x_max)),
                max(abs(Y[q] - y_min), abs(Y[q] - y_max)))
    print(ans)

