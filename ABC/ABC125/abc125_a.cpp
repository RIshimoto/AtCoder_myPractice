#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	double a, b, t, cnt, time;
	cin >> a >> b >> t;
	cnt = 0;
	time = a;
	while (time < t + 0.5)
	{
		time += a;
		cnt += b;
	}
	cout << cnt << endl;
	return 0;
}
