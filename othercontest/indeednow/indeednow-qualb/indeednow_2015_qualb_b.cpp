#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	int n, cnt;
	bool ok;
	cin >> s >> t;
	n = s.size();
	s += s;
	cnt = 0;
	if (n == t.size())
	{
		for(int i = n; i >= 0; i--)
		{
			if (s.substr(i, n) == t)	
				break;
			cnt++;
			if (i == 0)
				cnt = -1;
		}
	}
	else
		cnt = -1;
	cout << cnt << endl;
	return 0;
}
