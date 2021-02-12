#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i  < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	int cnt;
	bool b;
	if (s[0] == '0') b = true;
	else b = false;
	cnt = 0;
	for(int i = 1; i < s.size(); i++)
	{
		if (s[i] == '0')
		{
			if (b)
			{
				cnt++;
				b = false;
			}
			else
				b = true;
		}
		else
		{
			if (!b)
			{
				b = true;
				cnt++;
			}
			else
				b = false;
		}
	}
	cout << cnt << endl;
	return 0;
}
