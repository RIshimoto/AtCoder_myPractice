from collections import defaultdict
N, K = map(int, input().split())
A = list(map(int, input().split()))

def f(an, n): 
    return (an + (an - n + 1)) * n // 2

A.append(0)
A.sort(reverse=True)
ans = 0
for i in range(N):
    diff = A[i] - A[i+1]
    cnt = diff * (i + 1)
    if cnt <= K:
        K -= cnt
        ans += f(A[i], diff) * (i + 1)
    else:
        d = K // (i + 1)
        m = K % (i + 1)
        ans += f(A[i], d) * (i + 1)
        ans += (A[i] - d) * m
        K = 0
print(ans)
