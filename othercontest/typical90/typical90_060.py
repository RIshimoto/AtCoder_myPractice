import bisect
N = int(input())
A = list(map(int, input().split()))

def LIS(A):
    LIS = [0] * len(A)
    B = [float('inf')]
    for i, a in enumerate(A):
        if a > B[-1]:
            pos = len(B)
            B.append(a)
        else:
            pos = bisect.bisect_left(B, a)
            B[pos] = a
        LIS[i] = pos + 1
    return LIS 

P = LIS(A)
Q = LIS(list(reversed(A)))
Q.reverse()
ans = 0
for i in range(N):
    ans = max(ans, P[i] + Q[i] - 1)
print(ans)
