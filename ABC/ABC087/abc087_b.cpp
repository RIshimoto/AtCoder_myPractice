#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i <= (n); i++)
using namespace std;

signed main(void)
{
	long long a, b, c, x;
	long long cnt;
	
	cnt = 0;
	cin >> a >> b >> c >> x;
		rep(i, a) rep(j, b) rep(k, c)
		{
			if (x == 500 * i + 100 * j + 50 * k)
				cnt++;
		}
	cout << cnt << endl;
	return 0;
}
