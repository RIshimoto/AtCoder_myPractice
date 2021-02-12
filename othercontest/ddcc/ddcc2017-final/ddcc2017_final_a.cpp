#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int K, cnt;
	int a[] = {200, 300};
	cin >> K;
	rep(i, 2)
	{
		cnt = 0;
		for(int j = 0; j <= a[i]; j += K)
		{
			for(int k = 0; k <= a[i]; k += K)
			{
				ll x, y, z, w, r;
				x = pow(j - a[i] / 2, 2) + pow(k - a[i] / 2, 2);
				y = pow((j + K) - a[i] / 2, 2) + pow(k - a[i] / 2, 2);
				z = pow(j - a[i] / 2, 2) + pow((k + K) - a[i] / 2, 2);
				w = pow((j + K) - a[i] / 2, 2) + pow((k + K) - a[i] / 2, 2);
				r = (a[i] / 2) * (a[i] / 2);
				if (x <= r && y <= r && z <= r && w <= r)
					cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
