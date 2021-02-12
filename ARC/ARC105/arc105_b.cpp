#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll=long long;
using P=pair<ll, ll>;

signed main(void)
{
	int n;
	int mx, mn;
	cin >> n;
	vector<int> v(n);
	map<int, int> mp;

	mx = 0;
	mn = 1e9;
	//int ti = clock();
	rep(i, n) 
	{
		cin >> v[i];
		mp[v[i]]++;
		mn = min(v[i], mn);
		mx = max(v[i], mx);
	}
	while (mp.size() != 1)
	{
		mp[mx - mn] += mp.rbegin()->second;
		mp.erase(mx);
		mx = mp.rbegin()->first;
		mn = mp.begin()->first;
	}
	 //printf("Execution Time: %.4lf sec\n", 1.0 * (clock() - ti) / CLOCKS_PER_SEC);
	cout << mn << endl;
	return 0;
}
