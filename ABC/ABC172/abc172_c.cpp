#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, char>;

signed main(void)
{
	int n, m, k, ans;
	ll sum;
	cin >> n >> m >> k;	
	vector<ll> a(n + 1, 0), b(m + 1, 0);
	a[0] = b[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		int A;
		cin >> A;
		a[i] = A;
	}
	for (int i = 1; i <= m; i++)
	{
		int B;
		cin >> B;
		b[i] = B;
	}
	rep(i, n) a[i + 1] += a[i];
	rep(i, m) b[i + 1] += b[i];
	ans = 0;
	rep(i, n + 1)
	{
		sum = a[i];
		if (sum > k) continue;
		int lo, hi;
		lo = 0; hi = m + 1;
		while (hi - lo > 1)
		{
			int mid = (hi + lo) / 2;
			if ((ll)sum + b[mid] > k)
				hi = mid;
			else
				lo = mid;
		}
		ans = max(lo + i, ans);
	}
	cout << ans << endl;
	return 0;
}
