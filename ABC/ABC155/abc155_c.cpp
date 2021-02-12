#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	map<string, int> m;
	int n; cin >> n;
	int maxi;

	maxi = 0;	
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		m[s]++;
		if (m[s] > maxi)
			maxi = m[s];
	}
	for (auto p : m)
	{
		auto key = p.first;
		auto value = p.second;
		if (maxi == value)
			cout << key << endl;
	}
	return 0;
}
