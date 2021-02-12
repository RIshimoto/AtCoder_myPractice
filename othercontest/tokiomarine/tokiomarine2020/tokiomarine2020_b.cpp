#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	ll a, v, b, w, t;
	cin >> a >> v >> b >> w >> t;
	if (v > w)
	{
		if (abs(a - b) <= abs(v - w) * t)
		{
			cout << "YES" << endl;
			return 0;
		}
	}	
	cout << "NO" << endl;
	return 0;
}
