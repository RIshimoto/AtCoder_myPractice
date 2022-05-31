N = int(input())
A = list(map(int, input().split()))

A.sort(reverse=True)
iter_A = iter(A)
ans = next(iter_A)
a = 0
cnt = 0
for _ in range(N):
    if cnt == 2:
        a = next(iter_A)
        cnt = 0
    ans += a
    cnt += 1
print(ans)
