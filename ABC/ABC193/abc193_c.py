N = int(input())
sq = int(N ** 0.5)
s = set()
for v in range(2, sq+1):
    x = v * v
    while x <= N:
        s.add(x)
        x *= a
print(N - len(s))
