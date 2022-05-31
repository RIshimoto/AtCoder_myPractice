from collections import deque
N, Q = map(int, input().split())

index = [i for i in range(N)]
right = [(i+1) % N for i in range(N)]
left = [i % N for i in range(N-1, N-1+N)]
for i in range(Q):
    q = int(input()) 
    q -= 1
    if index[q] == N - 1:
        leftq = left[q]
        leftleftq = left[leftq]

        left[q] = left[leftq]
        left[leftq] = q
        left[right[q]]  = leftq

        rightq = right[q]
        right[q] = leftq 
        right[leftq] = rightq
        right[leftleftq] = q

        index[q], index[leftq] = index[leftq], index[q]
    else:
        rightq = right[q]
        rightrightq = right[rightq]
        right[q] = right[rightq]
        right[rightq] = q
        right[left[q]]  = rightq

        leftq = left[q]
        left[q] = rightq
        left[rightq] = leftq
        left[rightrightq] = q

        index[q], index[rightq] = index[rightq], index[q]

output = []
for i in range(N):
    output.append((index[i], i))
output.sort()
for i in range(len(output)):
    _, v = output[i]
    print(v+1, end="")
    if i < len(output)-1: 
        print(" ", end="")
print()
