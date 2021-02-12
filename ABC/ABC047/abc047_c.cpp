#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	char color;
	int cnt;
	cin >> s;
	color = s[0];
	cnt = 0;
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] != color)
		{
			cnt++;
			color = s[i];
		}
	}
	cout << cnt << endl;
	return 0;
}
