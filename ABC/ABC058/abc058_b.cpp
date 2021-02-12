#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	cin >> s >> t;
	rep(i, t.size())
	{
		cout << s[i] << t[i];
	}
	if (s.size() > t.size())
		cout << s[s.size() - 1];
	cout << endl;
	return 0;
}
