#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	map<int, int> mp;
	rep(i, n) mp[i + 1] = 0;
	rep(i, n - 1) 
	{
		int x;
		cin >> x;
		mp[x]++;
	}
	for(auto p : mp)
	{
		cout << p.second << endl;
	}
	return 0;
}
