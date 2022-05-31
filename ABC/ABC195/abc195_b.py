A, B, W = map(int, input().split())

W *= 1000
mx = 0
mn = float('inf')
for n in range(W+1):
    if A * n <= W and W <= B * n:
        mx = max(mx, n)
        mn = min(mn, n)
if mx == 0:
    print("UNSATISFIABLE")
else:
    print(mn, mx)

