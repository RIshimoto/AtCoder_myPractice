#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int gcd(int x, int y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

signed main(void)
{
	int n, q;
	cin >> n >> q;
	int a[n], s[q], left[n], right[n];
	rep(i, n) cin >> a[i];
	rep(i, q) cin >> s[i];

	left[0] = a[0];
	right[n - 1] = a[n - 1];
	rep(i, n - 1)
	{
		int j = n - 1 - i;
		left[i + 1] = gcd(left[i], a[i + 1]);
		right[j - 1] = gcd(right[j], a[j - 1]);
	}
	rep(i, q)
	{
		int g = gcd(left[n - 1], s[i]);
		if (g != 1)
			cout << g << endl;
		else
		{
			int hi, lo, mid;
			hi = n - 1;
			lo = 0;
			mid = lo;
			while (hi - lo > 1)
			{
				g = gcd(left[mid], s[i]);
				if (g == 1)
					hi = mid;
				else
					lo = mid;
				mid = (hi + lo) / 2;

			}
			cout << hi + 1 << endl; 
		}
	}
	return 0;
}
