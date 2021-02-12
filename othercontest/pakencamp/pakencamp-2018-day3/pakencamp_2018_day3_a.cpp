#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using  namespace std;

signed main(void)
{
	int y, m, d;
	int cnt;
	cin >> y >> m >> d;
	cnt = y - 2018;
	if (m == 12 && d == 25)
		cout << cnt << endl;
	else
		cout << "NOT CHRISTMAS DAY" << endl;
	return 0;
}
