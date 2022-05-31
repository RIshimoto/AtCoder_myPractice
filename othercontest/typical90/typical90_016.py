N = int(input())
A, B, C = map(int, input().split())

ans = float('inf')
for i in range(10000):
    for j in range(10000):
        if N - (A * i + B * j) >= 0 and (N - (A * i + B * j)) % C == 0:
            k = (N - (A * i + B * j)) // C
            ans = min(ans, i + j + k)
print(ans)
