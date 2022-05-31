import numpy as np

N = int(input())
A = list(map(int, input().split()))

if N == 1:
    print(max(0, A[0]))
else:
    end_pos = [0] * (N - 1)
    end_pos[0] = A[0]
    sum = A[0]
    for i in range(1, N-1):
        sum = sum + A[i]
        end_pos[i] = end_pos[i - 1] + sum
    mx = np.argmax(end_pos)
    ans = end_pos[mx]
    tmp =  end_pos[mx]
    for j in range(min(N, mx+2)):
        tmp += A[j]
        ans = max(ans, tmp)
    print(max(0, ans))
