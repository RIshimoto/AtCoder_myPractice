#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	int a[n];
	rep(i, n) cin >> a[i];
	rep(i, n)
	{
		int hi, lo, mid;
		hi = n;
		lo = 0;
		while (hi - lo > 0)
		{
			int cnt = 0;
			mid = (hi + lo) / 2;
			if (a[lo] != a[hi])
			hi = mid;
		}
	}
}
