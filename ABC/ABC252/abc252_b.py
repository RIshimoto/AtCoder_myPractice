N, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

deli = max(A) 
ok = False
for i in range(N):
    if deli == A[i]:
        if (i + 1) in B:
            ok = True
if ok:
    print("Yes")
else:
    print("No")
