#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s[10];
	bool ok;
	rep(i, 10) cin >> s[i];
	rep(i, 10)
	{
		ok = false;
		rep(j, 10)
		{
			if (s[j][i] == 'o')
			{
				ok = true;
				break;
			}
		}
		if (!ok)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
