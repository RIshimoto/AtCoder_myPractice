#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int y;
	cin >> y;
	if (y % 4 == 0)
	{
		if (y % 100 == 0 && y % 400 != 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	return 0;
}
