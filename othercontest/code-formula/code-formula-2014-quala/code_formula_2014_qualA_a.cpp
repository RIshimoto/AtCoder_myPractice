#include<bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	rep(i, 100)
	{
		if (i * i * i == n)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
