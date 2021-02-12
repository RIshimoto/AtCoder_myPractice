#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<string> v;
	string s, str;
	set<string> st;
	bool flag;

	getline(cin, str);
	stringstream ss{str};
	while(getline(ss, s, ' '))
	{
		v.push_back(s);
	}
	for(const string& s: v)
	{
		flag = false;
		rep(i, s.size())
		{
			if (s[i] == '@')
			{
				flag = true;
			}
			else if (flag)
			{
				int j = i;
				while(s[j] != '@'&& j < s.size()) j++;
				st.insert(s.substr(i, j - i));
				flag = false;
				i = j - 1;
			}
		}
	}
	for(auto p : st)
	{
		cout << p << endl;
	}
	return 0;
}
