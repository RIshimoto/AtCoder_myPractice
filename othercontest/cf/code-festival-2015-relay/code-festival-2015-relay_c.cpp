#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const string PI = "31415926535897";
signed main(void)
{
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 32 << endl;
	}
	else
	{
		rep(i, PI.size())
		{
			if (PI[i] == n + '0')
			{
				cout << i << endl;
				return 0;
			}
		}
	}
	return 0;
}
