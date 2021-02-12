#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int h, w;
	cin >> h >> w;
	cout << h * (w - 1) + (h - 1) * w << endl;
	return 0;
}
