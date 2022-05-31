N = int(input())
A = list(map(int, input().split()))

A.sort(reverse=True)
ans = sum([n * A[i] for i, n in enumerate(range(N-1, -N,-2))])
print(ans)
