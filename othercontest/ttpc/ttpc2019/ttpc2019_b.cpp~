#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

bool check(string s)
{
	rep(j, s.size())
	{
		for(int k = j + 4; k < s.size(); k++)
		{
			if (s.substr(j, 4) == "okyo" && s.substr(k, 3) == "ech")
			{
				return true;
			}
		}
	}
	return false;
}

signed main(void)
{
	int n;
	cin >> n;
	rep(i, n)
	{
		string s;
		cin >> s;
		if (check(s))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}	
	return 0;
}
