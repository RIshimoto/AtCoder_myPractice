#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t, ans[12];
	cin >> s;

	t = "WBWBWWBWBWBW";
	ans[0] = "Do";
	ans[1] = "Si";
	ans[3] = "La";
	ans[5] = "So";
	ans[7] = "Fa";
	ans[8] = "Mi";
	ans[10] = "Re";
	rep(i, s.size())
	{
		if (s.size() - i >= 12)
		{
			if (t == s.substr(i, 12))
			{
				cout << ans[i % 12] << endl;
				break;
			}
		}
		else
		{
			if (t.substr(0, s.size() - i) == s.substr(i, s.size() - i))
			{
				cout << ans[i % 12] << endl;
				break;
			}
		}
	}
	return 0;
}
