N, K = map(int, input().split())
a = list(map(int, input().split()))

c = [0] * N
k = 0
for i in range(K):
    b = []
    for j in range(i, N, K):
        b.append(a[j])
    b.sort()
    j = i
    for v in b:
        c[j] = v
        j += K

for i in range(N-1):
    if c[i] > c[i+1]: 
        print("No")
        exit()
print("Yes")
