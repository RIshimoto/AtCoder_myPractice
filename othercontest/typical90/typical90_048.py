import sys
sys.setrecursionlimit(10**6)
N, K = map(int, input().split())
AB = [map(int, input().split()) for _ in range(N)]
A, B = [list(i) for i in zip(*AB)]

s = []
s.extend(B)
s.extend([A[i]-B[i] for i in range(N)])
s = sorted(s, reverse=True)
ans = sum(s[:K])
print(ans)
