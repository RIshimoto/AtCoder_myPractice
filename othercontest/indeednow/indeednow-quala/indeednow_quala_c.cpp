#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, q;
	vector<int> s;
	cin >> n;
	rep(i, n)
	{
		int p;
		cin >> p;
		if (p != 0)
			s.push_back(p);
	}
	if (s.size() == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	sort(s.rbegin(), s.rend());
	cin >> q;
	rep(i, q)
	{
		int k;
		cin >> k;
		if (k == 0)
			cout << s[0] + 1 << endl;
		else if (k >= s.size())
			cout << 0 << endl;
		else
		{
			cout << s[k] + 1 << endl;
		}
	}
	return 0;
}
