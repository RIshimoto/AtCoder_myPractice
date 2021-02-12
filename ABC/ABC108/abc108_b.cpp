#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int diff_x = x2 - x1, diff_y = y2 - y1;
	cout <<  x2 - diff_y << " " << y2 + diff_x << " " << x1 - diff_y << " " << y1 + diff_x << endl;
	return 0;
}
