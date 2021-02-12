#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

int r2, c2;
int		solve(int x, int y)
{
	if (x == r2 && y == c2)
		return 0;
	else
	{
		if (abs(x - r2) + abs(y - c2) <= 3 ||
			x + y == r2 + c2 ||
			x - y == r2 - c2) 
			return 1;
		else if (	(x + y + r2 + c2) % 2 == 0 		||
					abs(x - r2) + abs(y - c2) <= 6	||
					abs((x + y) - (r2 + c2)) <= 3	||
					abs((x - y) - (r2 - c2)) <= 3 
				)
			return 2;
		else
			return 3;
	}
}

signed main(void)
{
	int r1, c1;
	cin >> r1 >> c1 >> r2 >> c2;	
	cout << solve(r1, c1) << endl;
	return 0;
}
