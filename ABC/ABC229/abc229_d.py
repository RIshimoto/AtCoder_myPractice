S = input()
K = int(input())

n = len(S)
l = 0
r = 0
k = 0
ans = 0
while r < n:
    if S[r] == 'X':
        r += 1
    elif S[r] == '.':
        if k < K:
           r += 1
           k += 1
        else:
            if S[l] == '.':
                k -= 1 
            l += 1
    ans = max(ans, r - l)
print(ans) 
