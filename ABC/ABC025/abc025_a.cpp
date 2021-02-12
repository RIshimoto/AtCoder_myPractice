#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	string s, ans;
	int n;
	int cnt;
	cin >> s >> n;

	cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		for (int j = 0; j < s.size(); j++)
		{
			ans += s[i];
			ans += s[j];
			cnt++;
			if (cnt == n)
			{
				cout << ans << endl;
				return 0;
			}
			ans = "";
		}
	}
	return 0;
}
