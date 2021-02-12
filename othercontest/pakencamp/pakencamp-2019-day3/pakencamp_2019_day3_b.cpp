#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	map<string, int> mp;
	int n;
	cin >> n;
	mp["black"] = mp["white"] = 0;
	rep(i, n)
	{
		string s;
		cin >> s;
		mp[s]++;
	}
	if (mp["black"] < mp["white"])
		cout << "white" << endl;
	else
		cout << "black" << endl;
	return 0;
}
