#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, a, b;
	cin >> n >> a >> b;
	if ((a + b) % 2 == 0)	
		cout << (b - a) / 2 << endl;
	else
		cout << min(a - 1, n - b) + 1 + (b - a - 1) / 2 << endl;
	return 0;
}
