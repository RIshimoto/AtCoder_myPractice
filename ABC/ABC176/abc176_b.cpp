#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;  i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	string s;
	ll cnt;
	cin >> s;
	cnt = 0;
	rep(i, s.size())
		cnt += s[i] - '0';
	if (cnt % 9 == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
