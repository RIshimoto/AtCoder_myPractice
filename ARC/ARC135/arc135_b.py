N = int(input())
S = list(map(int, input().split()))

x = [0] * 3
for i in range(3):
    s = 0
    for j in range(i+1, N, 3):
        s += S[j] - S[j-1]
        x[i] = max(x[i], -s)

if sum(x) <= S[0]:
    A = [0] * (N + 2)
    A[0] = x[0]
    A[1] = x[1]
    A[2] = x[2] + S[0] - sum(x)
    for i in range(3):
        for j in range(i, N-1, 3):
            A[j+3] = A[j] + (S[j+1] - S[j])
    print("Yes")
    print(*A)
else:
    print("No")
