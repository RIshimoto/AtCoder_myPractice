#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

vector<pair<int, P>> vec(2 * 1e6 + 100, make_pair(0, P(-1, -1)));
signed main(void)
{
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i];
	rep(i, n)
	{
		rep(j, m)
		{
			int c = a[i] + b[j];
			if (vec[c].first > 0)
			{
				cout << vec[c].second.first << " " << vec[c].second.second << " ";
				cout << i << " " << j << endl; 
				return 0;
			}
			else
			{
				vec[c].first++;
				vec[c].second = P(i, j);
			}
		}
	}
	cout << -1 << endl;
	return 0;
}
