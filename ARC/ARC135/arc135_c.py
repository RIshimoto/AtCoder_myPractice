N = int(input())
A = list(map(int, input().split()))

cnt1 = [0] * 30
for i, a in enumerate(A):
    for j in range(30):
        if ((a >> j) & 1) == 1:
            cnt1[29-j] += 1

ans = sum(A)
for a in A:
    sum = 0
    p = 1
    for j in range(30):
        if ((a >> j) & 1) == 1:
            sum += p * (N-cnt1[29-j])
        else:
            sum += p * cnt1[29-j]
        p *= 2
    ans = max(ans, sum)
print(ans)
