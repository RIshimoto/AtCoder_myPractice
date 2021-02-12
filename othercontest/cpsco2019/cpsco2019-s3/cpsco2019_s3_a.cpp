#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	rep(i, s.size())
	{
		if (s[i] == 'O')
			cout << 'A';
		else if (s[i] == 'A')
			cout << 'O';
		else
			cout << s[i];
	}
	cout << endl;
	return 0;
}
