#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, ans;
	int k;
	bool like[10], flag;
	cin >> s >> k;

	int d[k];
	rep(i, 10) like[i] = true;
	rep(i, k)
	{
		cin >> d[i];
		like[d[i]] = false;
	}
	flag = true;
	rep(j, s.size())
	{
		rep(i, 10)
		{
			if (!(s.size() != 1 && j == 0 && i == 0))
			{
				if (like[i])
				{
					if (flag)
					{
						if (s[j] <= i + '0')
						{
							ans += i + '0';
							if (s[j] < i + '0')
							{
								flag = false;
							}
							break;
						}
					}
					else
					{
						ans += i + '0';
						break;
					}
				}
			}
		}
	}
	if (ans.size() != s.size())
	{
		ans = "";
		rep(j, s.size() + 1) rep(i, 10)
		{
			if (like[i])
			{
				if (!(j == 0 && i == 0))
				{
					ans += i + '0'; 
					break;
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}
