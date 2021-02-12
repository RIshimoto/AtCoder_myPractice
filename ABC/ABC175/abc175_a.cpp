#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	string s;
	int cnt, ans;

	cin >> s;
	cnt = 0;
	ans = 0;
	rep(i, 3)
	{
		if (s[i] == 'R')
		{
			cnt++;
			ans = max(cnt, ans);
		}
		else
			cnt = 0; 
	}
	cout << ans << endl;
	return 0;
}
