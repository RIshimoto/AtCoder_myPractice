#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	rep(i, s.size())
	{
		switch(s[i])
		{
			case 'O':
				s[i] = '0';
				break;
			case 'D':
				s[i] = '0';
				break;
			case 'I':
				s[i] = '1';
				break;
			case 'Z':
				s[i] = '2';
				break;
			case 'S':
				s[i] = '5';
				break;
			case 'B':
				s[i] = '8';
				break;

		}
	}
	cout << s << endl;
	return 0;
}
