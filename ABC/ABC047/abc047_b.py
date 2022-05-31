W, H, N = map(int, input().split())

w_mn = 0
w_mx = W
h_mn = 0
h_mx = H
for _ in range(N):
    x, y, a = map(int, input().split())
    if a == 1:
        w_mn = max(x, w_mn)
    elif a == 2:
        w_mx = min(x, w_mx) 
    elif a == 3:
        h_mn = max(y, h_mn)
    elif a == 4:
        h_mx = min(y, h_mx)
print(max(0, w_mx - w_mn) * max(0, h_mx - h_mn))
        
