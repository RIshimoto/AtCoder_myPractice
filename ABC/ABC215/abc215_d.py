N, M = map(int, input().split())
A = list(map(int, input().split()))

s = set()
def prime_factor(n):
    global s
    sqn = int(n ** 0.5)
    for i in range(2, sqn + 1):
        if n % i == 0:
            while n % i == 0:
                n //= i 
            if not i in s:
                for x in range(i, M+1, i):
                    s.add(x)
    if n != 1:
        for x in range(n, M+1, n):
            s.add(x)

def solve():
    global s
    for a in A:
        prime_factor(a)

    t = set(range(1, M+1))
    ans = t - s
    ans = sorted(ans)
    print(len(ans))
    for output in ans:
        print(output)

if __name__ == '__main__':
    solve()
