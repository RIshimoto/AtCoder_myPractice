N = int(input())

T = []
K = []
A = []
for _ in range(N):
    input_line = list(map(int, input().split(' ')))
    T.append(input_line[0])
    K.append(input_line[1])
    A.append([input_line[i] - 1 for i in range(2, 2 + input_line[1])])

check = [False] * N
check[N-1] = True
for i in range(N - 1, -1, -1):
    if check[i]:
        for j in range(K[i]):
            check[A[i][j]] = True 

print(sum([T[i] for i in range(N) if check[i]]))
