from collections import defaultdict
N = int(input())
recode = defaultdict(lambda: 0)
for _ in range(N):
    S = input()
    if recode[S] == 0:
        print(S)
    else:
        print(S + '(' + str(recode[S]) + ')')
    recode[S] += 1

