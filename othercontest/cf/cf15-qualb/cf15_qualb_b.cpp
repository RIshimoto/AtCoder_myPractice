#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;


signed main(void)
{
	int n, m;
	cin >> n >> m;
	map<int, int> mp;

	rep(i, n) 
	{
		int a;
		cin >> a;
		mp[a]++;
	}
	for(auto p : mp)
	{
		int k = p.first;
		int v = p.second;
		if (v > n / 2)
		{
			cout << k << endl;
			return 0;
		}
	}
	cout << '?' << endl;
	return 0;
}
