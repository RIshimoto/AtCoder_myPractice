import itertools
N = int(input())
S = [input() for _ in range(N)]

ans = float('inf')
for n in range(10):
    n_index = set()
    for reel in range(N):
        for i in range(10):
            if S[reel][i] == str(n):
                j = i
                while j in n_index:
                    j += 10
                n_index.add(j)
                break
    ans = min(ans, max(n_index))
print(ans)
