X = int(input())

MAX = 10**5
pows = [None] * MAX
for x in range(MAX):
    pows[x] = x ** 5
    
def bisect(key):
    lo, up = 0, MAX-1
    while lo <= up:
        mid = (lo + up) // 2
        if pows[mid] == key:
            return mid
        if pows[mid] <= key: 
            lo = mid + 1
        elif pows[mid] > key:
            up = mid - 1
    return None

for i in range(MAX):
    if pows[i] - X > 0:
        j = bisect(pows[i] - X)
        if not j is None:
            print(i, j)
            exit()
    if X - pows[i] > 0:
        j = bisect(X - pows[i])
        if not j is None:
            print(i, -j)
            exit()

