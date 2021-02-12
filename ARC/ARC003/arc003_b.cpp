#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<string> s(n);
	rep(i, n) 
	{
		cin >> s[i];
		reverse(s[i].begin(), s[i].end());
	}
	sort(s.begin(), s.end());
	rep(i, n)
	{
		reverse(s[i].begin(), s[i].end());
		cout << s[i] << endl;
	}
	return 0;
}
