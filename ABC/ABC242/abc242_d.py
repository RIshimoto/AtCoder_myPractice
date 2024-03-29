import sys
sys.setrecursionlimit(10**6)
S = input()
Q = int(input())

def g(s, add):
    return chr((ord(s)-ord('A')+add)%3+ord('A'))
    
def f(t, k):
    if k == 0:
       return g(S[0], t) 
    if t == 0:
        return S[k]
    return g(f(t-1, k//2), k%2+1) 

for _ in range(Q):
    t, k = map(int, input().split())
    ans = f(t, k-1)
    print(ans)
