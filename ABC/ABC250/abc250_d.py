N = int(input())

MAX = 10**6
is_prime = [True] * MAX
is_prime[0] = is_prime[1] = False
for i in range(2, MAX):
    if is_prime[i] == True:
        for j in range(i+i, MAX, i):
            is_prime[j] = False
primes = []
for i in range(1, MAX):
    if is_prime[i] == True:
        primes.append(i)

primes_3 = {}
for p in primes:
    primes_3[p] = p**3

primes.sort()
cnt = 0
n = len(primes)
for i in range(n):
    for j in range(i+1, n):
        p, q = primes[i], primes[j]
        if p * primes_3[q] > N:
            break
        cnt += 1
print(cnt)
