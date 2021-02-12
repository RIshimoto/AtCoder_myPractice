#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string a, b;
	cin >> a >> b;
	if (a.size() > b.size())
		cout << "GREATER" << endl;
	else if (a.size() < b.size())
		cout << "LESS" << endl;
	else
	{
		rep(i, a.size())
		{
			if (a[i] > b[i])
			{
				cout << "GREATER" << endl;
				return 0;
			}
			else if (a[i] < b[i])
			{
				cout << "LESS" << endl;
				return 0;
			}
		}
		cout << "EQUAL" << endl;
	}
	return 0;
}
