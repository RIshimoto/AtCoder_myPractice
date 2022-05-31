N, K = input().split()
K = int(K)

def base8_to_base10(N):
    N = int(N, 8)
    return N

def base10_to_base9(N):
    if N // 9 == 0:
        return str(N % 9)
    return base10_to_base9(N // 9) + str(N % 9)

for _ in range(K):
    N = base8_to_base10(N)
    N = base10_to_base9(N)
    N = N.replace('8', '5')
print(N)

