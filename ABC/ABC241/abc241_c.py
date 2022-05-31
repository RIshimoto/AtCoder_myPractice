N = int(input())
S = [list(input()) for _ in range(N)]

def check_row():
    for i in range(N):
        for j in range(N):
            cnt = 0
            ok = True
            for k in range(j, j+6): 
                if k >= N:
                    ok = False
                    break
                if S[i][k] == '#':
                    cnt += 1
            if cnt >= 4 and ok: 
                print("Yes")
                exit()

def check_col():
    for j in range(N):
        for i in range(N):
            cnt = 0
            ok = True
            for k in range(i, i+6): 
                if k >= N:
                    ok = False
                    break
                if S[k][j] == '#':
                    cnt += 1
            if cnt >= 4 and ok: 
                print("Yes")
                exit()

def check_naname():
    for i in range(N):
        for j in range(N):
            cnt = 0
            ok = True
            for k in range(6): 
                if i + k >= N or j + k >= N: 
                   ok = False
                   break
                if S[i+k][j+k] == '#':
                    cnt += 1
            if cnt >= 4 and ok: 
                print("Yes")
                exit()

    for i in range(N):
        for j in range(N):
            cnt = 0
            ok = True
            for k in range(6): 
                if i - k < 0 or j + k >= N: 
                   ok = False
                   break
                if S[i-k][j+k] == '#':
                    cnt += 1
            if cnt >= 4 and ok: 
                print("Yes")
                exit()

if __name__ == '__main__':
    check_row()
    check_col()
    check_naname()
    print("No")
