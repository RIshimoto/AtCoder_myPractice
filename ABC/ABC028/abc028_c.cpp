#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	vector<int> a(5), ans;
	rep(i, 5) cin >> a[i];
	for(int i = 0; i < 3; i++)
	{
		for(int j = i + 1; j < 4; j++)
		{
			for(int k = j + 1; k < 5; k++)
				ans.push_back(a[i] + a[j] + a[k]);
		}
	}
	sort(ans.rbegin(), ans.rend());
	cout << ans.at(2) << endl;
	return 0;
}
