N = int(input())
S = input()

s = ''
for i in range(N):
    s += S[i]
    if s[-3:] == 'fox':
        s = s[:-3]
print(len(s))
