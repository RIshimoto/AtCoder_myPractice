#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a;
	string s;
	cin >> a >> s;
	if (a == 0)
	{
		cout << "Yes" << endl;
		return 0;
	}
	rep(i, s.size())
	{
		if (s[i] == '+')
			a++;
		else if (s[i] == '-')
			a--;
		if (a == 0)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
