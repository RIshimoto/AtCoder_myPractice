#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	long long ans, cnt;
	bool flag;

	cin >> s;
	ans = cnt = 0;
	flag = false;
	rep(i, s.size() - 1)
	{
		if (s.substr(i, 2) == "25")
		{
			flag = true;
			cnt++;
			i++;
		}
		else
		{
			if (flag)
			{
				ans += cnt * (cnt + 1) / 2;
				cnt = 0;
				flag = false;
			}
		}
	}
	if (flag)
		ans += cnt * (cnt + 1) / 2;
	cout << ans << endl;
	return 0;
}
