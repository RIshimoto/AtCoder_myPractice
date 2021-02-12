#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	set<char> st;
	cin >> s;
	rep(i, s.size())
		st.insert(s[i]);
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (!st.count(ch))
		{
			cout << ch << endl;
			return 0;
		}
	}
	cout << "None" << endl;
	return 0;
}
