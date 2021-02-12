#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int i = 0;
	rep(i, n + 1)
	{
		if (i * i  >= n)
		{
			cout <<  i * i - n << endl;
			return 0;
		}
	}
	return 0;
}
