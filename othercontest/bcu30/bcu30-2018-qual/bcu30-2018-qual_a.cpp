#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	map<int, int> mp;
	rep(i, 30) mp[i] = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		mp[a]++;
	}
	for(auto p : mp)
	{
		cout << p.second << " ";
	}
	cout << endl;
	return 0;
}
