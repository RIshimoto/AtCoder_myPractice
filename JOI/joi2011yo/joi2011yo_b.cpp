#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	string s, t;
	cin >> s >> n;
	cnt = 0;
	rep(i, n)
	{
		cin >> t;
		t += t;
		rep(i, t.size())
		{
			if (s == t.substr(i, s.size()))
			{
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
