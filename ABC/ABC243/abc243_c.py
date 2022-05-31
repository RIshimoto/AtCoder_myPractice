N = int(input())
XY = [map(int, input().split()) for _ in range(N)]
X, Y = [list(i) for i in zip(*XY)]
S = input()

s = []
for i in range(N):
    s.append((Y[i], X[i], i))
s.sort(key=lambda x: (x[0], x[1]))

i = 0
while i < N:
    j = i
    while j + 1 < N and s[j][0] == s[j+1][0]:
        if S[s[j][2]] == 'R' and S[s[j+1][2]] == 'L':
            print("Yes")
            exit()
        j += 1
    i = j + 1
print("No")
