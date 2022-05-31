N = int(input())

x_max = -float('inf')
y_max = -float('inf')
x_min = float('inf')
y_min = float('inf')
for i in range(N):
    x, y = map(int, input().split())
    x_max = max(x_max, x - y)
    y_max = max(y_max, x + y)
    x_min = min(x_min, x - y)
    y_min = min(y_min, x + y)
ans = max(abs(x_min - x_max), abs(y_min - y_max))
print(ans)
