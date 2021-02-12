#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll; 

ll dfs(int n)
{
	ll cnt = 1;
	if (n <= 0)
		return cnt;
	return cnt += dfs(n - 1) * 5;
}
signed main(void)
{
	int n;
	cin >> n;
	cout << dfs(n)<< endl;
	return 0;
}
