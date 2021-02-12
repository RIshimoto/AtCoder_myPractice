#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t, u;
	cin >> s >> t;
	u = "";
	u += s[0];
	u += t[0];
	if (u == "SH")
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
