N, K, Q = map(int, input().split())
A = list(map(int, input().split()))
L = list(map(int, input().split()))

pos = [False] * N
mp = {}
for i, a in enumerate(A, 1):
    a -= 1
    mp[i] = a 
    pos[a] = True

for l in L:
    if mp[l] + 1 < N:
        if pos[mp[l]+1] == False:
            pos[mp[l]] = False
            mp[l] += 1 
            pos[mp[l]] = True
for i in range(1, K+1):
    print(mp[i]+1)
