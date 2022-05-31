L, R = map(int, input().split())
S = input()

print(S[:L-1], end='')
for i in range(R-1, L-2, -1):
    print(S[i], end='')
print(S[R:])
