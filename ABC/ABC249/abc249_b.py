S = input()
if S.islower() == False and S.isupper() == False and len(set(S)) == len(S):
    print("Yes")
else:
    print("No")
