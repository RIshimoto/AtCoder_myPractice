N = int(input())
S = input()
A = list(map(int, input().split()))

k = float('inf')
for i in range(N):
    k = min(k, abs(A[i] - A[i+1]))

print(k)
for j in range(k):
    for i in range(N + 1):
        print((A[i] + j) // k, end='')
        if i < N + 1:
            print(' ', end='')
    print()
