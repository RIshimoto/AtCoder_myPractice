N = int(input())
S = input()
Q = int(input())

s = list(S)
rev = False
for _ in range(Q):
    T, A, B = map(int, input().split())
    A, B = A-1, B-1
    if T == 1:
        if rev:
            A, B = (A+N)%(2*N), (B+N)%(2*N)
        s[A], s[B] = s[B], s[A]
    elif T == 2:
        rev = not rev
if rev:
    ans = ''.join(s[N:] + s[:N])
else:
    ans = ''.join(s)
print(ans)
