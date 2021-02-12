#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

signed main(void)
{
	string t;
	cin >> t;
	rep(i, t.size())
	{
		if (t[i] == '?')
			t[i] = 'D';
	}
	cout << t << endl;
	return 0;
}
