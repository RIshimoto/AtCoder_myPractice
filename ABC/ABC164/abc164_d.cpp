//‘
#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s;
	ll n, v, p, cnt;
	map<ll, ll> mp;

	cin >> s;
	n = s.size();
	reverse(s.begin(), s.end());
	mp[0]++;
	cnt = v = 0;
	p = 1;
	rep(i, n)
	{
		v += (s[i] - '0') * p;
		v %= 2019;
		p = (p * 10) % 2019;
		cnt += mp[v];
		mp[v]++;
	}
	cout << cnt << endl;
	return 0;
}
