#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	set<string> st;
	cin >> n;
	rep(i, n)
	{
		string s;
		cin >> s;
		st.insert(s);
	}
	int ans = st.size();
	cout << ans << endl;
	return 0;
}
