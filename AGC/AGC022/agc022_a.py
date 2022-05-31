import itertools
S = input()

if len(S) == 26:
    for T in itertools.permutations(S, 26):
        ans = ''
        for s, t in zip(S, T):
            ans += t
            if s < t:
                print(ans)
                exit()
            elif s > t:
                break
    print(-1)
else:
    T = ""
    for i in range(97, 97+26):
        if not chr(i) in S:
            T += chr(i)
    print(S + sorted(T)[0])
    
