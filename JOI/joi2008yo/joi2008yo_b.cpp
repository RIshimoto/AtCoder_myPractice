#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int joi, ioi;
	cin >> s;
	joi = ioi = 0;
	rep(i, s.size())
	{
		if (s.substr(i, 3) == "JOI")
			joi++;
		if (s.substr(i, 3) == "IOI")
			ioi++;
	}
	cout << joi << endl;
	cout << ioi << endl;
	return 0;
}
