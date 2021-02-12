#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int n, ans;
	cin >> s;
	n = s.size();
	ans = 0;
	rep(i, n)
	{
		// g
		if (i % 2 == 0)
		{
			if (s[i] == 'p')
				ans--;	
		}
		// p
		else
		{
			if (s[i] == 'g')
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
