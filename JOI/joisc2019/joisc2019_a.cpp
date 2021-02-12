#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

signed main(void)
{
	int n, q, cnt;
	cin >> n >> q;
	P p[n];
	rep(i, n) cin >> p[i].first >> p[i].second;
	rep(i, q)
	{
		int x, y, z;
		cin >> x >> y >> z;
		cnt = 0;
		rep(j, n)
		{
			if (x <= p[j].first && y <= p[j].second && z <= p[j].first + p[j].second)
				cnt++;
		}	
		cout << cnt << endl;
	}
	return 0;
}
