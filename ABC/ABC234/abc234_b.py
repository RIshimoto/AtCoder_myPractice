N = int(input())

xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]

ans = 0
for i in range(N):
    for j in range(N):
        ans = max(ans, ((x[i] - x[j]) ** 2 + (y[i] - y[j]) ** 2) ** 0.5)
print(ans)
