N, X, Y, Z = map(int ,input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))


gokaku = []
p1 = []
for n in range(N):
    p1.append((A[n], B[n], n))
p1.sort(reverse=True, key=lambda x: (x[0], -x[2]))

p2 = []
for i, (a, b, n) in enumerate(p1):
    if i < X:
        gokaku.append(n+1)
    else:
       p2.append((b, a, n)) 
p2.sort(reverse=True, key=lambda x: (x[0], -x[2]))

p3 = []
for i, (a, b, n) in enumerate(p2):
    if i < Y:
        gokaku.append(n+1)
    else:
        p3.append((a+b, n))
p3.sort(reverse=True, key=lambda x: (x[0], -x[1]))

for i, (_, n) in enumerate(p3):
    if i < Z:
        gokaku.append(n+1)
gokaku.sort()
print(*gokaku)
