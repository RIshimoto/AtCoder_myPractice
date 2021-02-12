#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b, cnt;
	cin >> n >> a >> b;
	cnt = 0;
	rep(i, n) 
	{
		int t;
		cin >> t;
		if (t < a || t >= b)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
