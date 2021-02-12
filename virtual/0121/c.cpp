#include <bits/stdc++.h>
#define rep(i, n) for(int i= 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<long long> a(n), b(n);
	vector<int> q;
	long long suma, sumb, s;
	int ans;

	suma = sumb = 0;
	rep(i, n) 
	{
		cin >> a[i]; 
		suma += a[i];
	}
	rep(i, n)
	{
		cin >> b[i];
		sumb += b[i];
	}
		ans = 0;
	if (suma < sumb)
		cout << -1 << endl;
	else
	{
		s = 0;
		rep(i, n)
		{
			if (a[i] < b[i])
			{
				s += b[i] - a[i];
				ans++;
			}
			else if (a[i] > b[i])
				q.push_back(a[i] - b[i]);

		}
		sort(q.rbegin(), q.rend());
		int j;
		j = 0;
		while (s > 0)
		{
			s -= q[j];
			j++;
			ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
