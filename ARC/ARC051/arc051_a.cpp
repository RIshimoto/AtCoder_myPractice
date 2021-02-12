#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int x, y, r;
int dis(int a, int b)
{
	return (x - a) * (x - a) + (y - b) * (y - b);
}

signed main(void)
{
	int x2, y2, x3, y3;
	bool red, blue;
	cin >> x >> y >> r >> x2 >> y2 >> x3 >> y3;
	red = blue = true;
	if (x2 <= x - r && x + r <= x3)
	{
		if (y2 <= y - r && y + r <= y3)
			red = false;
	}
	else
	{
		int d = r * r;
		if (dis(x2, y2) <= d && dis(x2, y3) <= d &&\
				dis(x3, y2) <= d && dis(x3, y3) <= d)
			blue = false;
	}
	if (red)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	if (blue)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
