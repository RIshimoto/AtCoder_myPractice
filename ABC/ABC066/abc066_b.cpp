#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	string s;
	int n;
	bool ok;

	cin >> s;
	n = s.size();
	if (n % 2 != 0) n--;
	while (n >= 0)
	{
		n -= 2;
		ok = true;
		for (int j = 0; j < n / 2; j++)
		{
			if (s[j] != s[n / 2 + j])
				ok = false;
		}
		if (ok)
			break;
	}
	cout << n << endl;
	return 0;
}
