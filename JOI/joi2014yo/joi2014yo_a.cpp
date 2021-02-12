#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int sum = 0;
	rep(i, 5)
	{
		int a;
		cin >> a;
		sum += max(40, a);
	}
	cout << sum / 5 << endl;
	return (0);
}
