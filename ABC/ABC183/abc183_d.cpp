#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

ll imos[200100];
signed main(void)
{
	ll n, w, m;
	cin >> n >> w;
	imos[0] = w;
	ll s, t, p;
	m = 0;
	rep(i, n) 
	{
		cin >> s >> t >> p;
		imos[s] += -p;
		imos[t] += p;
		m = max(m, t);
	}
	rep(i, m) imos[i + 1] += imos[i];
	rep(i, m) 
	{
		if (imos[i] < 0)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
