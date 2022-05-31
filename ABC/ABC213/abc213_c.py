H, W, N = map(int, input().split())
AB = [map(int, input().split()) for _ in range(N)]
A, B = [list(i) for i in zip(*AB)]

a = sorted(set(A))
b = sorted(set(B))
da = dict(zip(a, range(1, N+1)))
db = dict(zip(b, range(1, N+1)))
[print(da[A[i]], db[B[i]]) for i in range(N)]
