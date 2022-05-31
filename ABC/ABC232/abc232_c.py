import itertools
N, M = map(int, input().split())

taka = [[] for _ in range(N)]
for _ in range(M):
    A, B = map(int, input().split())
    A -= 1
    B -= 1
    taka[A].append(B)
    taka[B].append(A)

aoki = [[] for _ in range(N)]
for _ in range(M):
    C, D = map(int, input().split())
    C -= 1
    D -= 1
    aoki[C].append(D)
    aoki[D].append(C)

for P in itertools.permutations(range(N), N):
    ok = True
    for i, j in list(itertools.combinations(range(N), 2)):
        if (j in taka[i]) != (P[j] in aoki[P[i]]):
            ok = False
            break
    if ok:
        print("Yes")
        exit()
print("No")
