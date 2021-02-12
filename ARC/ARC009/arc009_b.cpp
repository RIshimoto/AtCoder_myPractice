#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int keta (ll n)
{
	ll ans;
	ans = 0;

	while(n)
	{
		n /= 10;
		ans++;
	}
	return ans;
}

signed main(void)
{
	int r[10], rule[10], n;
	rep(i, 10) cin >> r[i];
	rep(i, 10) rule[r[i]] = i;
	cin >> n;
	ll a[n];
	rep(i, n) cin >> a[i];
	rep(i, n - 1)
	{
		for(int j = n - 1; j > i; j--)
		{
			ll x, y;
			int l, r;
			x = a[j - 1];
			y = a[j];
			l = keta(x);
			r = keta(y);
			if (l > r)
			{
				swap(a[j], a[j - 1]);
			}
			else if (l == r)
			{
				vector<int> p(l), q(l);
				while (l >= 0)
				{	
					l--;
					p[l] = x % 10; 
					q[l] = y % 10;
					x /= 10;
					y /= 10;
				}
				int k = 0;
				while (k < r)
				{
					if (rule[p[k]] > rule[q[k]])
					{
						swap(a[j], a[j - 1]);
						break;
					}
					else if (rule[p[k]] < rule[q[k]])
						break;
					k++;
				}
			}
		}
	}
	rep(i, n) cout << a[i] << endl;
	return 0;
}
