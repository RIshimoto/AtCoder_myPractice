#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, t, sum, ans;

	cin >> n >> t;
	vector<tuple<int, int, int>> a;
	ans = sum = 0;
	rep(i, n)
	{
		int x, y, z;
		cin >> x >> y;
		z = x - y;
		a.push_back(make_tuple(z, x, y));
		sum += y;
	}
	sort(a.begin(), a.end());
	if (sum > t)
	{
		cout << -1 << endl;
		return 0;
	}
	else
	{
		rep(i, n)
		{
			if (sum + get<0>(a[i]) <= t)
			{
				ans++;
				sum += get<0>(a[i]);
			}
			else
				break;
		}
	}
	cout << n - ans << endl;
	return 0;
}
