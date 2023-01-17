N, M = map(int, input().split())
S = input()

ans = []
i = N
while i > 0:
    ok = False
    for j in range(M, 0, -1):
        if i - j >= 0 and S[i-j] == '0': 
            ans.append(j)
            i -= j
            ok = True
            break
    if ok == False:
        print(-1)
        exit()
ans.reverse()
print(*ans)
