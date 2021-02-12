#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, ans;
	cin >> n;
	ans = 0;
	rep(i, n) 
	{
		int a;
		cin >> a;
		ll n = a;
		ll cnt = 0;
		for(ll i = 2; i * i <= n; i++)
		{
			while (a % i == 0)
			{
				cnt++;
				a /= i;
			}
		}
		if (a != 1) cnt++;
		ans ^= cnt;
	}
	if (ans == 0)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
