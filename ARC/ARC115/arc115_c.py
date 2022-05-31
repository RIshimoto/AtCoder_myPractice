N = int(input())

lst = [2] * (N + 1)
lst[1] = 1
for i in range(2, N+1):
    for j in range(i*2, N+1, i):
        lst[j] = lst[i] + 1
print(*lst[1:])
