#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<string> v;
	string s, str;

	getline(cin, str);
	stringstream ss{str};
	while (getline(ss, s, ' '))
	{
		v.push_back(s);
	}
	rep(i, v.size())
	{
		if (v[i] == "Right")
			cout << '>';
		else if (v[i] == "Left")
			cout << '<';
		else if (v[i] == "AtCoder")
			cout << "A";
		printf ("%c", i == v.size() - 1?'\n':' ');
	}
	return 0;
}
