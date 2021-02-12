#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s;
	ll cnt;
	char mn;
	cin >> s;
	cnt = 0;
	mn = s[0];
	rep(i, s.size())
	{
		if (mn >= s[i])
		{
			cnt++;
			mn = s[i];
		}
	}
	cout << cnt << endl;
	return 0;
}
