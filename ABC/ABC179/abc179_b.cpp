#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

signed main(void)
{
	int n, mx, cnt;
	cin >> n;
	mx = 0;
	cnt = 0;
	rep(i, n)
	{
		int d1, d2;
		cin >> d1 >> d2;
		if (d1 == d2)
		{
			cnt++;
			mx = max(cnt, mx);
		}
		else
			cnt = 0;
	}
	if (mx >= 3)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
