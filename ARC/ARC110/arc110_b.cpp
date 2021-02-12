#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll len = 1e10;
signed main(void)
{
	ll n, k;
	string s, t;

	cin >> n >> t;
	s = "";
	rep(i, 200100) s += "110";
	bool ok = false;
	rep(i, 200100 - n)
	{
		if (s.substr(i, n) == t)
		{
			ok = true;
			break;
		}
	}
	if (!ok) 
	{
		cout << 0 << endl;
		return 0;
	}
	k = 0;
	rep(i, n) k += (t[i] == '0' ? 1 : 0);
	if (t == "1")
		cout << 2 * len << endl;
	else if (t == "11")
		cout << len << endl;
	else
	{
		if (t[n - 1] == '0')
			cout << len - k + 1 << endl;
		else
			cout << len - k << endl;
	}
	return 0;
}
