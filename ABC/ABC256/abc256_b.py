N = int(input())
A = list(map(int, input().split()))

B = [0] * N
for i in range(N-1, -1, -1): 
    B[i] += A[i]
    for j in range(i-1, -1, -1): 
        B[j] += A[i]
P = sum([1 if b >= 4 else 0 for b in B])
print(P)
