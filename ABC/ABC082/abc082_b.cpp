#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, t;
	int m;

	cin >> s >> t;
	sort(s.begin(),s.end());
	sort(t.rbegin(),t.rend());
	if (s < t)
		cout << "Yes"<< endl;
	else
		cout << "No" << endl;
	return 0;
}
