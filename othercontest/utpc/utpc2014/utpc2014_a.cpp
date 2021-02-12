#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<string> v;
	string s, str;
	bool ok;
	getline(cin, str);
	stringstream ss{str};
	while(getline(ss, s, ' '))
		v.push_back(s);
	ok = true;
	while(ok)
	{
		int cnt = 0;
		rep(i, v.size())
		{
			if (v[i] != "not")
				cnt++;
		}
		if (cnt == 0) break;
		ok = false;
		rep(i, v.size() - 1)
		{
			if (v[i] == "not" && v[i + 1] == "not")
			{
				v.erase(v.begin() + i);
				v.erase(v.begin() + i);
				ok = true;
			}
		}
	}
	rep(i, v.size())
		printf("%s%c", v[i].c_str(), i == v.size()- 1?'\n':' ');
	return 0;
}
