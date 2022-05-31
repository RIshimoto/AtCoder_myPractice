N = int(input())

board = [['.' for _ in range(N)] for _ in range(N)]
j = 0
for i in range(N):
    k = 0
    while k < 3:
        board[i][j] = '#' 
        j += 1
        if N <= j:
            j = 0
        k += 1

if N % 3 != 0:
    board[0], board[N//3-1] = board[N//3-1], board[0]
    board[N-N//3], board[N-1] = board[N-1], board[N-N//3]

for i in range(N):
    for j in range(N):
        print(board[i][j], end='')
    print()
