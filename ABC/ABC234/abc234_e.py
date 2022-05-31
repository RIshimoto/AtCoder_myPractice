X = int(input())

x = [int(i) for i in list(str(X))]
n = len(x)
if len(x) == 1:
    print(''.join(map(str, x)))
else:
    while x[0] < 10:
        while x[1] < 10:
            diff = x[1] - x[0]
            ok = True
            for pos in range(2, n):
                if 0 <= x[pos-1] + diff <= 9:
                    x[pos] = x[pos-1] + diff
                else:
                    ok = False
                    break
            if ok:
                ans = int(''.join(map(str, x)))
                if ans >= X:
                    print(ans)
                    exit()
            x[1] += 1
        x[0] += 1
        x[1] = 0
"""
def backtrack(pos, add):
    if pos >= n:
        return True

    x[pos] = x[pos-1] + add
    if not (0 <= x[pos] <= 9):
        x[pos] = 0
        return False

    ok = backtrack(pos+1, add)
    return ok

while backtrack(1, add=x[1]-x[0]) == False:
    x[0] += 1

print(''.join(map(str, x)))
"""

