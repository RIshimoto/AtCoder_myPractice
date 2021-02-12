#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int n;
	cin >> s;
	n = 0;
	rep(i, s.size())
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			cout << "error" << endl;
			return 0;
		}
		n = n * 10 + (s[i] - '0');
	}
	cout << n * 2 << endl;
	return 0;
}
