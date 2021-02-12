#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	rep(i, s.size())
	{
		if (s.substr(i, 6) == "HAGIYA")
			cout << s.substr(0, i) + "HAGIXILE" + s.substr(i + 6, s.size() - i - 6) << endl;
	}
	return 0;
}
