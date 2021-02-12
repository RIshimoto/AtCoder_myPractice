#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int lsum, rsum, ans, n;
	bool ok;
	cin >> s;

	n = s.size();
	ans = lsum = rsum = 0;
	ok = true;
	for(int i = n - 1; i >= 0; i--)
	{
		if (s[i] == ')')
		{
			rsum++;
			if (lsum == 0)
			{
				ans++;
				if (ok)
				{
					ans += i;
					ok = false;
				}
			}
			else
				lsum--;
		}
		else if (s[i] == '(')
		{
			lsum++;
			if (rsum == 0)
			{
				ans++;
				if (ok)
				{
					ans += i;
					ok = false;
				}
			}
			else
				rsum--;
		}
		cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}
