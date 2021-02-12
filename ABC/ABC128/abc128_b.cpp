#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<pair<pair<string, int>, int>> v(n);
	for(int i = 0; i < n; i++)
	{
		string s;
		int p;
		cin >> s >> p;
		v[i] = make_pair(make_pair(s, -p), i + 1);
	}
	sort(v.begin(), v.end());
	rep(i, n) cout << v[i].second << endl;
	return 0;
}
