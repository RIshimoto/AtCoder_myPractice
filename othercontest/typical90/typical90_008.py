N = int(input())
S = input()
MOD = 10**9 + 7

word_to_id = {'a':1, 't':2, 'c':3, 'o':4, 'd':5, 'e':6, 'r':7}
id_to_word = {1:'a', 2:'t', 3:'c', 4:'o', 5:'d', 6:'e', 7:'r'}

dp = [0] * (len('atcoder')+1)
dp[0] = 1
for s in S:
    if s in 'atcoder':
        dp[word_to_id[s]] += dp[word_to_id[s] - 1]
print(dp[len('atcoder')]%MOD)
