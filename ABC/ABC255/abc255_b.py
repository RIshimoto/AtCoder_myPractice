N, K = map(int, input().split())
A = list(map(int, input().split()))
XY = [map(int, input().split()) for _ in range(N)]
X, Y = [list(i) for i in zip(*XY)]

def f(px, py, qx, qy):
    return ((px - qx) ** 2 + (py - qy) ** 2) ** 0.5

R = [float('inf')] * N 
for i in A:
    i -= 1
    for j in range(N):
        R[j] = min(R[j], f(X[i], Y[i], X[j], Y[j]))
ans = max(R)
print(ans)
