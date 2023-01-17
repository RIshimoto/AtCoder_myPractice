N = int(input())
A = [list(input()) for _  in range(N)]

for i in range(N):
    for j in range(i+1, N):
        if A[i][j] == 'W' and A[j][i] == 'L':
            continue
        if A[i][j] == 'L' and A[j][i] == 'W':
            continue
        if A[i][j] == 'D' and A[j][i] == 'D':
            continue
        print("incorrect")
        exit()
print("correct")
