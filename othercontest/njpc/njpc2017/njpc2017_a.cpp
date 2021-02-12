#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, mxn;
	string s;
	cin >> n >> s;
	m = s.size();
	mxn = min(n, m);
	rep(i, mxn) cout << s[i];
	cout << endl;
	return 0;
}
