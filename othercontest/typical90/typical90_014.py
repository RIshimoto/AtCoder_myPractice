N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

A = sorted(A)
B = sorted(B)
ans = sum([abs(A[i] - B[i]) for i in range(N)])
print(ans)
