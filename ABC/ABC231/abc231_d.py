import sys
sys.setrecursionlimit(1000000)

N, M = map(int, input().split())
AB = [list(map(int, input().split())) for _ in range(M)]

class UnionFind:
    def __init__(self, n):
        self.parent = list(range(n))

    def find(self, i):
        if self.parent[i] == i:
            return i
        else:
            self.parent[i] = self.find(self.parent[i])
            return self.parent[i]

    def union(self, i, j):
        i = self.find(i)
        j = self.find(j)
        self.parent[j] = i
    
def solve1():
    un = UnionFind(N)
    node = [[] for _ in range(N)]
    for i in range(M):
        A, B = AB[i][0], AB[i][1]
        A-=1
        B-=1
        node[A].append(B)
        node[B].append(A)
        if un.find(A) == un.find(B):
            print("No")
            return
        un.union(A, B)

    for i in range(N):
        if len(node[i]) >= 3:
            print("No")
            return
    print("Yes")

def solve2():
    node = [[] for _ in range(N)]
    for i in range(M):
        A, B = AB[i][0], AB[i][1]
        A-=1
        B-=1
        node[A].append(B)
        node[B].append(A)

    from collections import defaultdict 
    s = defaultdict(int)
    for i in range(N):
        t = tuple(sorted(node[i]))
        s[t] += 1
        if len(node[i]) == 1:
            if s[t] > 2:
                print("No")
                return
        elif len(node[i]) == 2:
            if s[t] >= 2: 
                print("No")
                return
        elif len(node[i]) >= 3:
            print("No")
            return
    print("Yes")

if __name__ == "__main__":
    solve2()
