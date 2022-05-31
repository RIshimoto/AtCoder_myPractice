from collections import defaultdict
N = int(input())

dd = defaultdict(int)
for _ in range(N):
    A, B = map(int, input().split())
    dd[A] += 1
    dd[A+B] -= 1
dd = sorted(dd.items())
pre = -1
now = 0
ans = [0] * (N + 1)
for (t, x) in dd:
    ans[now] += t - pre
    now += x
    pre = t
print(*ans[1:])
