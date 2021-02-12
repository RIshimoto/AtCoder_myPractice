#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b;
	string s;
	bool ok;
	cin >> a >> b >> s;

	ok = true;
	for (int i = 0; i < a + b + 1; i++)
	{
		if (i == a)
		{
			if (s[i] != '-')
				ok = false;
		}
		else
			if (!(s[i] >= '0' && s[i] <= '9'))
				ok = false;
	}
	if (ok)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
