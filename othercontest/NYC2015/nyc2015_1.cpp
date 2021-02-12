#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	string s;
	cin >> n;
	while(n != 0)
	{
		if (n % 2 == 0)
			s = s + '0';
		else
			s = s + '1';
		n /= 2;
	}
	rep(i, s.size() / 2)
	{
		if (s[i] != s[s.size() - 1 - i])
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
