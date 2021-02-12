#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, n;
	string s;
	cin >> a >> b >> n >> s;
	rep(i, n)
	{
		if (s[i] == 'S')
		{
			if (a > 0) a--;
		}
		else if (s[i] == 'C')
		{
			if (b > 0) b--;
		}
		else if (s[i] == 'E')
		{
			if (a > 0 || b > 0)
			{
				if (a < b)
					b--;
				else
					a--;
			}
		}
	}
	cout << a << endl << b << endl;
	return 0;
}
