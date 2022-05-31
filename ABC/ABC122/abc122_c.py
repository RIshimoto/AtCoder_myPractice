N, Q = map(int, input().split())
S = input()

sum = [0] * N 
for i in range(1, N):
    if S[i-1:i+1] == "AC":
        sum[i] = 1
for i in range(1, N):
    sum[i] += sum[i - 1]
for _ in range(Q):
    l, r = map(int, input().split())
    print(sum[r-1] - sum[l-1])
