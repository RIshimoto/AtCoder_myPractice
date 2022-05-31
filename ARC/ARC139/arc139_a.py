N = int(input())
T = list(map(int, input().split()))

prev = 1<<T[0]
for i in range(1, N):
    plen = len(bin(prev)[2:])
    now = 1 << T[i]
    if T[i-1] > T[i]:
        now = prev | (1<<T[i])
    elif T[i-1] <= T[i]:
        now = now | (prev & (((1 << plen) - 1) << T[i]))
        if now <= prev:
            now += 1 << (T[i]+1)
    prev = now
print(prev)
