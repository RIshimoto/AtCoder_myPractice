#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n, w_cnt;
	cin >> n;
	map<char, int> mp;
	string s;
	cin >> s;
	mp['R'] = mp['W'] = 0;
	rep(i, s.size())
		mp[s[i]]++;
	w_cnt = 0;
	for (int i = 0; i < mp['R']; i++)
	{
		if (s[i] == 'W')
			w_cnt++;
	}
	cout << w_cnt << endl;
	return 0;
}
