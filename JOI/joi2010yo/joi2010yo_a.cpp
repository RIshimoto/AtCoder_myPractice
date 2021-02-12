#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n;
	rep(i, 9)
	{
		cin >> m;
		n -= m;
	}
	cout << n << endl;
	return (0);
}
