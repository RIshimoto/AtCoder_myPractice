#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, k;
	cin >> n;
	vector<int> v(n);
	set<int> st;
	map<int, int> mp;
	rep(i, n) 
	{
		cin >> v.at(i);
		st.insert(v.at(i));
	}
	k = 0;
	for(auto x : st) mp[x] = k++;
	rep(i, n) cout << mp[v.at(i)] << endl;
	return 0;
}
