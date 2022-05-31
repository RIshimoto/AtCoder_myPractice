import itertools
S = input()

ans = 0
for n in range(0, 10000):
    flag = [False] * 10
    for i in range(4):
        flag[n % 10] = True
        n //= 10

    flag2 = True
    for i in range(10):
        if S[i] == 'o' and flag[i] == False:
            flag2 = False
        elif S[i] == 'x' and flag[i] == True:
            flag2 = False
    ans += flag2
print(ans)
