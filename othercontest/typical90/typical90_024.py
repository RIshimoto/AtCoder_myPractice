from scipy.special import comb
N, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

d = sum([abs(A[i] - B[i]) for i in range(N)])
K -= d
if K < 0:
    print("No")
elif K == 0:
    print("Yes")
else:
    if K % 2 == 0:
        print("Yes")
    else:
        print("No")

