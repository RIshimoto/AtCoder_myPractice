#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	cout << min(n / 10 * 100 + n % 10 * 15, (n / 10 + 1) * 100) << endl;
	return 0;
}
