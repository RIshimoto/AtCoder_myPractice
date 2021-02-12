#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	double w, h, x, y;
	cin >> w >> h >> x >> y;
	printf("%lf %d\n",w * h / 2, x + x == w && y + y == h);
}
