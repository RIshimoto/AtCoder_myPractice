N = int(input())
S = input()

ans = 0
i = 0
while i < N:
    cnt = 0
    # find x
    if S[i] == 'o':
        while i < N and S[i] == 'o':
            cnt += 1
            i += 1
        ans += (N - i)  * cnt
    # find o
    elif S[i] == 'x':
        while i < N and S[i] == 'x':
            cnt += 1
            i += 1
        ans += (N - i)  * cnt
print(ans)
