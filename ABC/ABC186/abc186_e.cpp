#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int t, n, s, k;
	cin >> t;
	rep(i, t)
	{
		cin >> n >> s >> k;
		if ((n - s) % k == 0)
			cout << (n - s) / k << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
