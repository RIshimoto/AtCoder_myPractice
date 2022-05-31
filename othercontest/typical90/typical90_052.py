N = int(input())
A = [sum(list(map(int, input().split()))) for _ in range(N)]
MOD = 10**9+7

p = 1
for i in range(N):
    p *= A[i] % MOD
print(p % MOD)
