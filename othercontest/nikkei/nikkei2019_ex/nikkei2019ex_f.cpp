#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
#define MX 1e16

signed main(void)
{
	ll x = 1789997546303; 
	int t;
	cin >> t;
	while(t < 1000)
	{
		if (x % 2 == 0) 
			x /= 2;
		else
			x = 3 * x + 1;
		t++;
	}
	cout << x << endl;
	return 0;
}
