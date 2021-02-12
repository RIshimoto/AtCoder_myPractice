#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i  <(n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	string s[n];
	rep(i, n) cin >> s[i];
	map<string, string> youbi;
	youbi["Mon"] = "Tue"; 
	youbi["Tue"] = "Wed"; 
	youbi["Wed"] = "Thu"; 
	youbi["Thu"] = "Fri"; 
	youbi["Fri"] = "Sat"; 
	youbi["Sat"] = "Sun"; 
	youbi["Sun"] = "Mon"; 
	rep(i, n) cout << youbi[s[i]]  << endl;
	return 0;
}
