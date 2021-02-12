#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int r, c, cnt;
	cin >> r >> c;
	cnt = 0;
	for (int x = c; x <= r; x += c)
	{
		int y = c;
		while(x * x + y * y <= r * r)
		{
			y += c;
			cnt++;
		}
	}
	cnt *= 4;
	cout << cnt << endl;
	return 0;
}
