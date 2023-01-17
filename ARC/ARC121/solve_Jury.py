def solve_Jury(N, dogs):
    from itertools import permutations

    ans = float('inf')
    for v in permutations(dogs):
        sum = 0
        for i in range(N):
            a1, c1 = v[i]
            a2, c2 = v[i+N]
            if c1 == c2:
                sum += 0
            else:
                sum += abs(a1 - a2)
        if ans > sum:
            print(v)
        ans = min(sum, ans)
    return ans
    
if __name__ == '__main__':
    N = int(input())
    dogs = []
    for _ in range(N*2):
        a, c = input().split()
        dogs.append((int(a), c))
    ans = solve_Jury(N, dogs)
    print(ans)
