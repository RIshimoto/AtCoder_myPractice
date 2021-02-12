#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int k;
	cin >> s >> k;
	set<string> st;
	for(int i = 0; i + k <= s.size(); i++)
	{
		st.insert(s.substr(i, k));
	}
	cout << st.size() << endl;
	return 0;
}
