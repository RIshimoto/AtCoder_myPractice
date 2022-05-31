S1, S2, S3 = map(str, input().split()) 
T1, T2, T3 = map(str, input().split()) 

def get_count():
    que = []
    que.append((S1, S2, S3, 0))
    for (s, t, u, cnt) in que:
        if s == T1 and t == T2 and u == T3:
            return cnt
        que.append((t, s, u, cnt+1))
        que.append((u, t, s, cnt+1))
        que.append((s, u, t, cnt+1))

cnt = get_count()
sousa = pow(10, 18)
if cnt % 2 == 0 or cnt % 5 == 0:
    print("Yes")
else:
    print("No")
