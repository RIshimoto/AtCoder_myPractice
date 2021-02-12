#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, q;
	cin >> n >> q;
	vector<pair<int, string>> s;
	string ans;
	ans = "kogakubu10gokan";
	rep(i, n) 
	{
		int x;
		string y;
		cin >> x >> y;
		s.push_back(make_pair(x, y));
	}
	sort(s.begin(), s.end());
	rep(i, n)
	{
		if (q < s[i].first)
			break;
		ans = s[i].second;
	}
	cout << ans << endl;
	return 0;
}
