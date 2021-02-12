#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int w, h;
	cin >> w >> h;
	if (w % 16 == 0 && h % 9 == 0)
		cout << "16:9" << endl;
	else if (w % 4 == 0 && h % 3 == 0)
		cout << "4:3" << endl;
	return 0;
}
