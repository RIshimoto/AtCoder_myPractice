#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, f;
	int j, diff = 'a' - 'A';

	cin >> s;
	f = "ICT"; 
	j = 0;
	rep(i, s.size())
	{
		if (s[i] == f[j] || s[i] == f[j] + diff)
			j++;
	}
	if (j == 3)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
