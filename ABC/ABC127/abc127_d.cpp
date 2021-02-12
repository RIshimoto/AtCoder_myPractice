#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	long long sum;
	cin >> n >> m;
	vector<int> a(n);
	vector<pair<int, int>> b(m);
	rep(i, n) cin >> a[i];
	rep(i, m) cin >> b[i].second >> b[i].first;
	sort(a.begin(), a.end());
	sort(b.rbegin(), b.rend());
	rep(i, n)
	{
		if (a[i] < b[0].first && b[0].second > 0)
		{
			a[i] = b[0].first;
			b[0].second--;
			if(b[0].second == 0)
				b.erase(b.begin());
		}
	}	
	sum = 0;
	rep(i, n) sum += a[i];
	cout << sum << endl;
	return 0;
}
