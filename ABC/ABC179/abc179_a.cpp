#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

signed main(void)
{
	string s;
	cin >> s;
	if (s[s.size() - 1] != 's')
		cout << s << 's' << endl;
	else
		cout << s << "es" << endl;
	return 0;
}
