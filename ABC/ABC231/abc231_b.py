N = int(input())

from collections import defaultdict

s = defaultdict(int)
for _ in range(N):
    S = input()
    s[S] += 1
print(max(s, key=s.get))
