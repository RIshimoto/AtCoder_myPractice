#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<string> v;
	rep(i, 15)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end());
	cout << v[6] << endl;
	return 0;
}
