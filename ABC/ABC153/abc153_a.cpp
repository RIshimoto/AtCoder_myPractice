#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int h, a;
	int cnt;
	cin >> h >> a;

	cnt = 1;
	while (h > a){h -= a; cnt++;}
	cout << cnt << endl;
	return 0;
}
