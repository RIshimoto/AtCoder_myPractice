#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	bool ok;
	cin >> n;
	rep(i, n)
	{
		map<char, int> mp;
		string s;
		cin >> s;
		rep(i, s.size())
			mp[s[i]]++;
		ok = true;
		for(auto p : mp)
		{
			auto k = p.first;
			auto v = p.second;
			switch(k)
			{
				case 'i':
					if (v != 1)
						ok = false;
					break;
				case 'n':
					if (v != 2)
						ok = false;
					break;
				case 'd':
					if(v != 2)
						ok = false;
					break;
				case 'e':
					if (v != 2)
						ok = false;
					break;
				case 'o':
					if (v != 1)
						ok = false;
					break;
				case 'w':
					if (v != 1)
						ok = false;
					break;
				default :
					ok = false;
					break;
			}
		}
		if (ok)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
