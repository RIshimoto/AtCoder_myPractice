#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;
signed main(void)
{
	int n;
	ll sum;
	cin >> n;
	sum = 0;
	rep(i, n)
	{
		string a;
		cin >> a;
		rep(j, a.size())
		{
			sum *= 10;
			sum += a[j] - '0';
			sum %= mod;
		}
	}
	cout << sum << endl;
	return 0;
}
