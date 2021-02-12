#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int c;
	cin >> c;
	vector<int> v[c];
	rep(i, c) 
	{
		rep(j, 3) 
		{
			int n;
			cin >> n;
			v[i].push_back(n);
		}
		sort(v[i].begin(), v[i].end());
	}
	long long ans;
	int maxi;
	ans = 1;
	rep(j, 3)
	{
		maxi = 0;
		rep(i, c) maxi = max(v[i][j], maxi);
		ans *= maxi;
	}
	cout << ans << endl;
	return 0;
}
