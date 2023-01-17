from collections import defaultdict
S = input()
mp = defaultdict(lambda: 0)
for s in S:
    mp[s] += 1
for k, v in mp.items(): 
    if v == 1:
        print(k)
        exit()
print(-1)

