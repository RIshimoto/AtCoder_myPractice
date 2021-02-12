#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long a, b, cnt;
	cin >> a >> b;
	a--;
	cnt = b / 4 - b / 100 + b / 400;
	cnt -= (a / 4 - a / 100 + a / 400);
	cout << cnt << endl;
	return 0;
}
