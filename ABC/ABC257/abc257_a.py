N, X = map(int, input().split())

n = 0
ans = 'A'
for i in range(X):
    if n == N:
        ans = chr(ord(ans) + 1)
        n = 0
    n += 1
print(ans)

