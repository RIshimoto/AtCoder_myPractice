N = int(input())
S = [list(input()) for _ in range(N)]
T = [list(input()) for _ in range(N)]

def find_left_top(S):
    for i in range(N):
        for j in range(N):
            if S[i][j] == '#':
                return i, j

def is_same(S, T):
    Si, Sj = find_left_top(S)
    Ti, Tj = find_left_top(T)
    offset_i, offset_j = Ti - Si, Tj - Sj
    for si in range(N):
        for sj in range(N):
            if S[si][sj] == '#':
                ti, tj = si + offset_i, sj + offset_j
                if 0 <= ti < N and 0 <= tj < N:
                    if T[ti][tj] != '#':
                        return False
                else:
                    return False
    return True

def rotate(S):
    return list(zip(*S[::-1]))

cntS = sum(1 for i in range(N) for j in range(N) if S[i][j] == '#')
cntT = sum(1 for i in range(N) for j in range(N) if T[i][j] == '#')
if cntS != cntT:
    print("No")
    exit()

for _ in range(4):
    if is_same(S, T) == True:
        print("Yes")
        exit()
    S = rotate(S)
print("No")
