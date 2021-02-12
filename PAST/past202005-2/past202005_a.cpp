#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s, t;
	cin >> s >> t;
	if (s == t)
		cout << "same" << endl;
	else
	{
		rep(i, 3)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
				s[i] += 'a' - 'A';
			if (t[i] >= 'A' && t[i] <= 'Z')
				t[i] += 'a' - 'A';
		}
		if (s == t)
			cout << "case-insensitive" << endl;
		else
			cout << "different" << endl;
	}
	return 0;
}
