#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a;
	int mn, mx;
	cin >> n >> a;
	mn = a / 3;
	if (a % 3 != 0) mn++;
	mx = min(n / 3, a);
	cout << mn << " " << mx << endl;
	return 0;
}
