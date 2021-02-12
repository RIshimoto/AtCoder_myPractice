#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int k;
	int odd, even;
	cin >> k;
	even = k / 2;
	odd = k - even;
	cout << even * odd << endl;
	return 0;
}
