#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, ans;
	int k, n;
	cin >> s >> k;
	n = s.size();
	n = k % n;
	ans = s.substr(n, s.size() - n);
	ans += s.substr(0, n);
	cout << ans << endl;
	return 0;
}
