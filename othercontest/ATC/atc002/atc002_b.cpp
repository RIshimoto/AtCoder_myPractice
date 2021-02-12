#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll f(ll n, ll k, ll m)
{
	if (k == 0)
		return 1;
	else
	{
		if (k % 2 == 1)
		{
			return f(n, k - 1, m) * n % m;
		}
		else
		{
			ll t = f(n, k / 2, m); 
			return t * t % m;
		}	
	}

}
signed main(void)
{
	ll n, m, p;
	cin >> n >> m >> p;
	cout << f(n, p, m) << endl;;
	return 0;
}
