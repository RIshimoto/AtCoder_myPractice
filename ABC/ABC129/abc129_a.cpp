#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	vector<int> p(3);
	int ans = 0;

	for(int i = 0; i < 3; i++) cin >> p[i];
	sort(p.begin(), p.end());
	ans += p.at(0) + p.at(1);
	cout << ans << endl;
	return 0;
}
