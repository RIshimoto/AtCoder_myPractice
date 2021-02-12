#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int ans;
	cin >> s;
	ans = 753;
	map<char, int> mp;
	rep(i, s.size() - 2)
	{
		string t = s.substr(i, 3);
		ans = min(abs(753 - ((t[0] - '0') * 100 + (t[1] - '0') * 10 + (t[2] - '0'))), ans);
	}
	cout << ans << endl;
	return 0;
}
