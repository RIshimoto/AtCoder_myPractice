N, M = map(int, input().split())
B = [list(map(int, input().split())) for l in range(N)]

def solve():
    for i in range(N):
        for j in range(M - 1):
            if B[i][j + 1] - B[i][j] != 1:
                print("No")
                return
    for j in range(M):
        for i in range(N - 1):
            if B[i + 1][j] - B[i][j] != 7:
                print("No")
                return
    for i in range(N):
        for j in range(M - 1):
            if B[i][j] % 7 == 0:
                if j + 1 < M:
                    print("No")
                    return
    print("Yes")

if __name__ == "__main__":
    solve()
