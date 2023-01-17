def solve(N):
    table = [[0 for _ in range(N)] for _ in range(N)]
    n = 1
    for i in range(N):
        for j in range(0, N, 2):
            table[i][j] = n
            n += 1

        for j in range(1, N, 2):
            table[i][j] = n
            n += 1
    return table

if __name__ == '__main__':
    N = int(input())
    table = solve(N)
    for i in range(N):
        print(*table[i])
