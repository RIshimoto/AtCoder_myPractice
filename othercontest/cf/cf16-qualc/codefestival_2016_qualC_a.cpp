#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	char c[] ="CF";
	int j = 0;
	rep(i, s.size())
	{
		if (s[i] == c[j])
		{
			j++;
			if (j == 2)
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
