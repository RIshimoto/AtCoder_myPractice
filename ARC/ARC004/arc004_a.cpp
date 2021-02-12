#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, taka, aoki;
	cin >> n;
	string s[n];

	rep(i, n) cin >> s[i];
	taka = aoki = 0;
	rep(i, n)
	{
		rep(j, s[i].size())
		{
			if (s[i][j] == 'R')
				taka++;
			else if (s[i][j] == 'B')
				aoki++;
		}
	}
	if (taka > aoki)
		cout << "TAKAHASHI" << endl;
	else if (taka < aoki)
		cout << "AOKI" << endl;
	else
		cout << "DRAW" << endl;
	return 0;
}
