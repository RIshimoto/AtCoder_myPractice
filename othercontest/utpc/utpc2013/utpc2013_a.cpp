#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int cnt;
	bool ok;
	cin >> s;
	ok = true;
	rep(i, 2)
	{
		if (s[i] == 'A' || s[i] == 'D' || s[i] == 'O' ||\
				s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'B')
			ok = false;
	}
	for(int i = 2; i < 4; i++)
	{
		if (s[i] == 'A' || s[i] == 'D' || s[i] == 'O' ||\
				s[i] == 'P' || s[i] == 'Q' || s[i] == 'R')
			cnt += 1;
		else if (s[i] == 'B')
			cnt += 2;
	}
	if (ok && cnt == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
