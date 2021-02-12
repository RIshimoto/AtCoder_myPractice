#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	cin >> n >> a >> b;
	if (n - (a + b) >= 0)
		cout << 0 << endl;
	else
		cout << (a + b) - n << endl;
	return 0;
}
