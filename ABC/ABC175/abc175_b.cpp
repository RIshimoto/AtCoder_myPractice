#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n, cnt;
	cin >> n;
	vector<int> a(n);

	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	cnt = 0;
	rep(i, n - 1)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
				continue;
			for (int k = n - 1; k > j; k--)
			{
				if (a[j] == a[k])
					continue;
				if (a[i] + a[j] > a[k])
					cnt++;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
