#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n;
	int cnt;
	string s;
	string ans;
	string tmp;
	cin >> n >> s;

	cnt = -1;
	ans += "b";
	for (int i = 1; i <= (n - 1) / 2 ; i++)
	{
		switch (i % 3)
		{
			case 0:
				tmp = "b";
				ans += "b";
				tmp += ans;
				ans = tmp;
				break;
			case 1:
				tmp = "a";
				ans += "c";
				tmp += ans;
				ans = tmp;
				break;
			case 2:
				tmp = "c";
				ans += "a";
				tmp += ans;
				ans = tmp;
				break;
			default:
				continue;
		}
	}
	if (ans == s)
		cnt = (n - 1) / 2;
	cout << cnt << endl;
	return 0;
}
