#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s, t, u;
	cin >> s >> t >> u;
	if (s.size() == 5 && t.size() == 7 && u.size() == 5)
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;
	return 0;
}
