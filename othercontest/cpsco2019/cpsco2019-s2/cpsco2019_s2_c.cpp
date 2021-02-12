#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll n, k, cnt, ans;
	string s;
	cin >> n >> k >> s;
	vector<ll> vec(n, 0);

	cnt = 0;
	rep(i, n)
	{
		if (s[i] == '(')
		{
			cnt++;
			vec[i] = cnt;
		}
		else
			cnt--;
	}
	sort(vec.rbegin(), vec.rend());
	ans = 0;
	rep(i, k)
	{
		ans += vec[i];
	}
	cout << ans << endl;
	return 0;
}
