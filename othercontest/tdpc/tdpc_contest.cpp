#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int a[n];
	set<int> dp;
	rep(i, n) cin >> a[i];
	dp.insert(0);
	rep(i, n)
	{
		vector<int> sum;
		for(auto p: dp)
		{
			sum.push_back(p + a[i]);
		}
		for(auto s : sum)
		{
			dp.insert(s);
		}
	}
	long long ans = dp.size();	
	cout << ans << endl;
	return 0;
}
