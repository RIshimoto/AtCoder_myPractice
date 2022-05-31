from statistics import median
N = int(input())
xy = [map(int, input().split()) for _ in range(N)]
x, y = [list(i) for i in zip(*xy)]

x_mid = median(x)
ans_x = sum([abs(x[i] - x_mid) for i in range(N)])

y_mid = median(y)
ans_y = sum([abs(y[i] - y_mid) for i in range(N)])
print(int(ans_x + ans_y))

