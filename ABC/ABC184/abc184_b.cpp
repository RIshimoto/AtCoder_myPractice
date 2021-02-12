#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	ll n, x;
	string s;
	cin >> n >> x >> s;
	rep(i, n)
	{
		if (s[i] == 'o')
			x++;
		else
			x = max((ll)0, x - 1);
	}
	cout << x << endl;	
	return 0;
}
