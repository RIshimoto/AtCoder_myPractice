#include <bits/stdc++.h>
#define rep(i, n) for(int i = 1; i <= (n); i++)
using namespace std;

signed main(void)
{
	string s;
	long long cnt;

	cin >> s;
	cnt = 0;
	if (s == "{}")
	{
		cout << "dict" << endl;
		return 0;
	}
	rep(i, s.size() - 2)
	{
		if (s[i] == '{') 
			cnt++;
		else if (s[i] == '}') 
			cnt--;
		else if (cnt == 0)
		{
			if (s[i] == ',')
			{
				cout << "set" << endl;
				return 0;
			}
			else if (s[i] == ':')
			{
				cout << "dict" << endl;
				return 0;
			}
		}
	}
	cout << "set" << endl;
	return 0;
}
