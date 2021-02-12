#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	int a[n];
	int lo, hi, mid, cnt;
	hi = 0;
	rep(i, n) 
	{
		cin >> a[i];
		hi = max(hi, a[i]);
	}
	lo = 0;
	hi += 1;
	while (hi - lo > 1)
	{
		mid = (hi + lo) / 2;
		cnt = 0;
		rep(i, n)
			cnt += (a[i] + mid - 1) / mid - 1;
		if (cnt > k)
			lo = mid;
		else
			hi = mid;
	}
	cout << hi << endl;
	return 0;
}
