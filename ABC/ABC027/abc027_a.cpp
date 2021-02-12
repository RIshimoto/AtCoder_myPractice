#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	map<int, int> mp;
	int a, b, c;
	cin >> a >> b >> c;
	mp[a]++;
	mp[b]++;
	mp[c]++;
	for(auto p : mp)
		if (p.second != 2)
			cout << p.first << endl;
	return 0;
}
