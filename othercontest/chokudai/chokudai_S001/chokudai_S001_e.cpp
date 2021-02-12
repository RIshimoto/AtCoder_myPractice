#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int a[n];
	rep(i, n)
	{
		cin >> a[i];
		if (a[i] == 1) cout << i + 1 << endl;
	}
	return 0;
}
