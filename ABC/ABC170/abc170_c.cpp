#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

signed main(void)
{
	int x, n, ans, mn;
	cin >> x >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];
	ans = mn = 1e9;
	sort(p.begin(), p.end());
	for(int i = -1000; i <= 1000; i++)
	{
		bool ok = true;
		rep(j, n)
		{
			if (p[j] > i) 
				break;
			else if (p[j] == i)
				ok = false;
		}
		if (ok)
		{
			if (mn > abs(x - i))
			{
				mn = abs(x - i);
				ans = i;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
