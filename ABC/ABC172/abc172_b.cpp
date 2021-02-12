#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	string s, t;
	cin >> s >> t;
	ll cnt = 0;
	rep(i, s.size())
	{
		if (s[i] != t[i])
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
