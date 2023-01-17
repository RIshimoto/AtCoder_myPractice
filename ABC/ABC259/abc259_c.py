S = input()
T = input()
lenS = len(S)
lenT = len(T)
if S == T:
    print("Yes")
    exit()
if lenS > lenT:
    print("No")
    exit()

i = 0
j = 0
while i < lenS and j < lenT:
    if S[i] != T[j]:
        print("No")
        exit()
    elif i >= 1 and S[i-1] == S[i]:
        target = S[i]
        cnt_s = 0
        while i < lenS and S[i] == target:
            cnt_s += 1
            i += 1
        cnt_t = 0
        while j < lenT and T[j] == target: 
            cnt_t += 1
            j += 1
        if cnt_s > cnt_t:
            print("No")
            exit()
    else:
        i += 1
        j += 1
if i == lenS and j == lenT:
    print("Yes")
else:
    print("No")
