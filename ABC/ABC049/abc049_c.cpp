#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int i = 0;
	string s, tmp;
	bool ok;

	cin >> s;
	reverse(s.begin(), s.end());
	ok = true;
	while (i < s.size() && ok)
	{
		tmp = s.substr(i, 5);
		if (tmp == "maerd" || tmp == "esare")
			i += 5;
		else
		{
			tmp = s.substr(i, 6);
			if  (tmp == "resare")
				i += 6;
			else
			{
				tmp = s.substr(i, 7);
				if (tmp == "remaerd")
					i += 7;
				else
					ok = false;
			}
		}
	}
	if (ok)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
