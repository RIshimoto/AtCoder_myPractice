from itertools  import combinations
N, P, Q = map(int, input().split())
A = list(map(int, input().split()))

A = [A[i] % P for i in range(N)] 
ans = 0
for a in combinations(A, 5):
    a1, a2, a3, a4, a5 = a
    if a1 % P * a2 % P * a3 % P * a4 % P * a5 % P == Q:
        ans += 1
print(ans)


