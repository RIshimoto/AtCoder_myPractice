#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<string> ans(1000);
	rep(i, 1000) ans[i] = to_string(i + 1);
	sort(ans.begin(), ans.end());
	rep(i, 1000) cout << ans[i] << endl;
	return 0;
}
