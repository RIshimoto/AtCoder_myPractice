#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long h, w;
	cin >> h >> w;
	if (h == 1 || w == 1)
		cout << 1 << endl;
	else 
		cout << (long long) (h * w + 1) / 2 << endl;
	return 0;
}
