#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++) 
using namespace std;

signed main(void)
{
	int a, b, c, d, cnt;
	
	cin >> a >> b >> c;
	d = a * 7 + b;
	cnt = (c / d) * 7;
	c %= d;
	if ((c + a - 1) / a >= 7)
		cnt += 7;
	else
		cnt += (c + a - 1) / a;
	cout << cnt << endl;
	return 0;
}
