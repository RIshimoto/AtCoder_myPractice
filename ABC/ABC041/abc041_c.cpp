#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<pair<int, int>> p(n);
	rep(i, n)
	{
		cin >> p[i].first;
		p[i].second = i + 1;
	}
	sort(p.rbegin(), p.rend());
	rep(i, n)
		cout <<  p[i].second << endl;
	return 0;
}
