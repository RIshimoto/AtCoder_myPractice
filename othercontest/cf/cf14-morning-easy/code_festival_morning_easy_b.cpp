#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<int> ans;
	int n;
	cin >> n;
	for(int i = 1; i <= 20; i++)
		ans.push_back(i);
	for(int i = 20; i > 0; i--)
		ans.push_back(i);
	n %= 40;
	cout << ans[n - 1] << endl;
	return 0;
}
