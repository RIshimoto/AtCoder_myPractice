#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, k;
	int cnt;
	ll tmp, sum, ans;

	cin >> n >> k;
	vector<ll> a(n);
	vector<pair<ll,int>> mx(n), mx_src(n);
	rep(i, n) 
	{
		cin >> a[i];
		mx_src[i] = make_pair(a[i], i);
		if (i != 0)
		{
			if (mx_src[i].first <= mx_src[i - 1].first)
				mx_src[i] = mx_src[i - 1];
		}
	}
	ans = 1e18;
	for (int bit = 1; bit < (1 << n); bit++)
	{
		cnt = 0;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
			{
				v.push_back(i);
				cnt++;
			}
		}
		if (cnt < k) continue;

		sum = 0;
		mx = mx_src;
		rep(i, v.size())
		{
			if (mx[v[i]].second == v[i]) continue;
			tmp = mx[v[i]].first - a[v[i]] + 1;
			for (int j = v[i]; j < n; j++)
			{
				if (mx[j].first <= a[v[i]] + tmp)
					mx[j] = make_pair((a[v[i]] + tmp), v[i]);
			}
			sum += tmp;
		}
		ans = min(sum, ans);
	}
	cout << ans << endl;
	return 0;
}
