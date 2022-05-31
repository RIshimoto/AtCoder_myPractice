H, W, K = map(int, input().split())
A = list(map(int, input().split()))
B = list(map(int, input().split()))

if sum(A) % K != sum(B) % K:
    print(-1)
else:
    C = [0] * W
    for i in range(W):
        C[i] = ((K - 1) * H - B[i]) % K

    D = [0] * H
    for i in range(H):
        D[i] = ((K - 1) * W - A[i]) % K

    Z = max(sum(C), sum(D))
    ans = H * W * (K - 1) - Z
    print(ans)
