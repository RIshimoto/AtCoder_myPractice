#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n, m;
	ll sum_a, sum_b;

	cin >> n >> m;
	sum_a = 0;
	rep(i, n) 
	{
		int a;
		cin >> a;
		sum_a += a;
	}
	sum_b = 0;
	rep(i, n)
	{
		int b;
		cin >> b;
		sum_b += b;
	}
	rep(i, m)
	{
		int c;
		cin >> c;
	}
	if (sum_a == sum_b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
