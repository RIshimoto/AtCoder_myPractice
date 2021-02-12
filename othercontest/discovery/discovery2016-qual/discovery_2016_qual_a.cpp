#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	string s;
	cin >> n;
	s = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
	cnt = 0;
	rep(i, s.size())
	{
		cout << s[i];
		cnt++;
		if (cnt >= n)
		{
			cout << endl;
			cnt = 0;
		}
	}
	if (cnt != 0)
		cout << endl;
	return 0;
}
