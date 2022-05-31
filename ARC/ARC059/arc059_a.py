N = int(input())
A = list(map(int, input().split()))

ans = float('inf')
for n in range(-100, 101):
    ans = min(ans, sum([(a - n) ** 2 for a in A]))
print(ans)
