N = int(input())
CP = [map(int, input().split()) for _ in range(N)]
C, P = [list(i) for i in zip(*CP)] 

class1_sum = [0] * (N + 1)
class2_sum = [0] * (N + 1)
for i in range(N):
    if C[i] == 1:
        class1_sum[i+1] += P[i]
    elif C[i] == 2:
        class2_sum[i+1] += P[i]

for i in range(N):
    class1_sum[i+1] += class1_sum[i]
    class2_sum[i+1] += class2_sum[i]

Q = int(input())
for _ in range(Q):
    L, R = map(int, input().split())
    print(class1_sum[R] - class1_sum[L-1], class2_sum[R] - class2_sum[L-1])
    
