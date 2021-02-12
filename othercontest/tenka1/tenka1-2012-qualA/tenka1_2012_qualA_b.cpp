#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	bool flag;

	flag = false;
	getline(cin, s);
	rep(i, s.size())
	{
		if (s[i] >= 'A'&& s[i] <= 'Z' || s[i] == ',')
		{
			if (flag)
				cout << ',' ;
			cout << s[i];
			flag = false;
		}
		else
			flag = true;
	}
	cout << endl;
	return 0;
}
