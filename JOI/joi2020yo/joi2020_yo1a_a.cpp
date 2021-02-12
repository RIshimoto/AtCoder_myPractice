#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	map<int, int> mp;
	mp[1] = mp[2] = 0;
	int a, b, c;
	cin >> a >> b >> c;
	mp[a]++;
	mp[b]++;
	mp[c]++;
	if (mp[1] < mp[2]) 
		cout << 2 << endl;
	else
		cout << 1 << endl;
	return 0;
}
