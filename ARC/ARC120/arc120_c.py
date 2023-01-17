import bisect
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

if A == B:
    print(0)
    exit()
    
A_ = []
for i in range(N):
    A_.append((A[i]+i, i))
print(A_)
A_.sort()
for i in range(N):
    B[i] += i

key = [k for k, v in A_]
cnt = 0
ans = 0
for i in range(N):
    k = bisect.bisect_left(key, B[i])
    if k >= N:
        print(-1)
        exit()
    a, j = A_[k]
    if a != B[i]:
        print(-1)
        exit()
    print(j, i)
    ans += j + cnt - i
    if j + cnt != i:
        cnt += 1
print(ans)
