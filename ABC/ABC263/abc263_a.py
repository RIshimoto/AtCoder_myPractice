from collections import defaultdict
A, B, C, D, E = map(int, input().split())

mp = defaultdict(lambda:0)
mp[A] += 1
mp[B] += 1
mp[C] += 1
mp[D] += 1
mp[E] += 1

if len(mp.keys()) == 2:
    m = list(mp.values())
    if (m[0] == 2 and m[1] == 3) or (m[0] == 3 and m[1] == 2):
        print("Yes")
        exit()
print("No")

