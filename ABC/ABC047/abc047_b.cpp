#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int w, h, n;
	int sx, sy;

	cin >> w >> h >> n;
	sx = sy = 0;
	rep(i, n)
	{
		pair<int, int> p;
		int a;
		cin >> p.first >> p.second >> a;
		if (a == 1)
		{
			if (p.first > sx)
				sx = p.first;
		}
		else if (a == 2)
		{
			if (p.first < w)
				w = p.first; 
		}
		else if (a == 3)
		{
			if (p.second > sy)
				sy = p.second;
		}
		else if (a == 4)
		{
			if (p.second < h)
				h = p.second;
		}
	}
	if (w <= sx || h <= sy)
		cout << 0 << endl;
	else
		cout << (w - sx) * (h - sy) << endl;
	return 0;
}
