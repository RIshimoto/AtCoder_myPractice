N = int(input())
A = list(map(int, input().split()))

n = 2 ** (N - 1)
print(A.index(min(max(A[:n]), max(A[n:]))) + 1)
