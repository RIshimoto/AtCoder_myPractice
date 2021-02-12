#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	cin >> s >> t;
	if (t.substr(0, s.size()) == s && t.size() == s.size() + 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
