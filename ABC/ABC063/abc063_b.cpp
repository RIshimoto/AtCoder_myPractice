#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	set<char> st;
	cin >> s;

	rep(i, s.size())
	{
		st.insert(s[i]);
	}
	if (st.size() == s.size())
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
