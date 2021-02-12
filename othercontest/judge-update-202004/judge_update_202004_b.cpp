#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> r, b;
	rep(i, n)
	{
		int a;
		char c;
		cin >> a >> c;
		if (c == 'R')
			r.push_back(a);
		else if (c == 'B')
			b.push_back(a);
	}
	sort(r.begin(), r.end());
	sort(b.begin(), b.end());
	rep(i, r.size())
		cout << r[i] << endl;
	rep(i, b.size())
		cout << b[i] << endl;
	return 0;
}
