#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	if (n == 1)
		cout << 1 << endl;
	else
		cout << 7 * n / 2 << endl;
	return 0;
}
