#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int sum;
	sum = 0;
	rep(i, 4)
	{
		int a;
		cin >> a;
		sum += a;
	}
	cout << sum / 60 << endl;
	cout << sum % 60 << endl;
	return 0;
}
