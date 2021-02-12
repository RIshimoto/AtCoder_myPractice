#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		vector<char> out;
		if (i % 2 == 0)
			out.push_back('a');
		if (i % 3 == 0)
			out.push_back('b');
		if (i % 4 == 0)
			out.push_back('c');
		if (i % 5 == 0)
			out.push_back('d');
		if (i % 6 == 0)
			out.push_back('e');
		if (out.size() == 0)
			cout << i;
		else
			rep(i, out.size()) cout << out[i];
		cout << '\n';
	}
	return 0;
}
