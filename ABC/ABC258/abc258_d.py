N, X = map(int, input().split())
A, B = [], []
for i in range(N):
    a, b = map(int, input().split())
    A.append(a)
    B.append(b)

sumA = [0] * N
sumA[0] = A[0] + B[0]
for i in range(1, N):
    sumA[i] += sumA[i-1] + (A[i] + B[i])

mn = float('inf')
for i in range(N):
    if X - (i + 1) >= 0:
        mn = min(mn, sumA[i] + (X - (i + 1)) * B[i])
    else:
        mn = min(mn, sumA[i])
print(mn)
