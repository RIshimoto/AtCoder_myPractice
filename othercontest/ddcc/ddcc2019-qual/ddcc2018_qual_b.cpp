#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	if (n % 2 == 0)
		cout << n * (n / 2 - 1) << endl;
	else
		cout << (n - 1) * ((n - 1) / 2 - 1) + 1 << endl;
	return 0;
}
