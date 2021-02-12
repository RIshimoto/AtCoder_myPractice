#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	map<char, int> mp;
	string s;
	cin >> s;
	for (char c = 'A'; c <= 'F'; c++)
		mp[c] = 0;
	for(int i = 0; i < s.size(); i++)
		mp[s[i]]++;
	for(auto p : mp)
		printf("%d%c", p.second, p.first=='F'?'\n':' ');
	return 0;
}
