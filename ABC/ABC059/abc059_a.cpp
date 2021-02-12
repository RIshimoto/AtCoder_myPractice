#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i <(n); i++)
using namespace std;

signed main(void)
{
	string s[3], ans;
	int d = 'a' - 'A';
	rep(i, 3)
	{
		cin >> s[i];
		ans += s[i][0] - d;
	}
	cout << ans << endl;
	return 0;
}
