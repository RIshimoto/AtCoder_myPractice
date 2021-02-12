#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll gcd(ll x, ll y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

signed main(void)
{
	int n;
	cin >> n;
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		cout << gcd(a, b) << endl;
	}
	return 0;
}
