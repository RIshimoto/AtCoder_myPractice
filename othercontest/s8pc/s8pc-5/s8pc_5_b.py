N, M = map(int, input().split())
x = []
y = []
r1 = []
for _ in range(N):
    x_, y_, r = map(int, input().split())
    x.append(x_)
    y.append(y_)
    r1.append(r)
for _ in range(M):
    x_, y_ = map(int, input().split())
    x.append(x_)
    y.append(y_)

def is_ok(r2):
    if M == 0:
        return False
    for i in range(N, N+M):
        for j in range(N):
            if (x[i] - x[j])**2 + (y[i] - y[j])**2 < (r1[j] + r2)**2:
               return False 
        for j in range(i+1, N+M):
            if (x[i] - x[j])**2 + (y[i] - y[j])**2 < (r2 + r2)**2:
                return False 
    return True

ans = 0
left = min(r1)
right = 201
while right - left > 0.0000001:
    mid = (left + right) / 2
    if is_ok(mid):
        left = mid
        ans = max(ans, left)
    else:
        right = mid
print(ans)
