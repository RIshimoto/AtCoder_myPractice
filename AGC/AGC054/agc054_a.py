N = int(input())
S = input()

if S[0] != S[-1]:
    print(1)
else:
    for i in range(1, N-2):
        if S[0] != S[i] and S[i+1] != S[-1]:
            print(2)
            exit()
    print(-1)
