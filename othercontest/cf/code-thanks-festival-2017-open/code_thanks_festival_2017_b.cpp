#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	bool ok;
	cin >> s;
	int cnt = 0;
	while (cnt < s.size() - 1)
	{
		t = s;
		rep(i, cnt) t += '#';
		ok = true;
		rep(j, t.size() / 2)
		{
			if (t[t.size() - 1 - j] == '#')
				continue;
			if (t[j] != t[t.size() - 1 - j])
			{
				ok = false;
				break;
			}
		}
		if (ok) 
			break;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
