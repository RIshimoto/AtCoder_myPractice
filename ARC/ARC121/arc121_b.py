def solve(N, dogs):
    N2 = N*2
    dogs.sort()
    sum = 0
    for i in range(N2-1):
        a1, c1 = dogs[i]
        a2, c2 = dogs[i+1]
        if c1 == c2:
            sum += 0
        else:
            sum += abs(a1 - a2)
    return sum

if __name__ == '__dogs__':
    N = int(input())
    dogs = []
    for _ in range(N2):
        a, c = input().split()
        dogs.append((int(a), c))
    ans = solve(N, dogs)
    print(ans)
