#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	string s;
	cin >> a >> b >> s;
	if (a <= s.size() && s.size() <= b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
