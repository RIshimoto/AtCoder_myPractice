#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	int cnt;
	cin >> s;
	t = "CODEFESTIVAL2016";
	cnt = 0;
	rep(i, s.size())
	{
		if (s[i] != t[i])
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
