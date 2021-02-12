#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, ans;
	int cnt;
	bool flag;
	cin >> s;
	ans = "";
	int i = 0;
	while (i < s.size())
	{
		if (s[i] == 'W')
		{
			flag = true;
			cnt = 1;
			while(s[++i] == 'W' && i < s.size()) cnt++;
		}
		if (s[i] == 'A')
		{
			ans += 'A';
			if (flag)
			rep(j, cnt) ans += 'C';
			flag = false;
		}
		else
		{
			if (flag) rep(j, cnt) ans += 'W';
			flag = false;
			if (i < s.size())
			ans += s[i];
		}
		i++;
	}
	cout << ans << endl;
	return 0;
}
