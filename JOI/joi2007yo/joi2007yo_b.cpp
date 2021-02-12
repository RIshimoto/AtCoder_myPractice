#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	map<int, int> mp;

	for (int i = 1; i <= 28; i++)
	{
		int a;
		cin >> a;
		mp[a]++;
	}
	for (int i = 1; i <= 30; i++)
	{
		if (!mp[i])
			cout << i << endl;
	}
	return 0;
}
