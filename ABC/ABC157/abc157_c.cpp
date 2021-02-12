#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m; 
	cin >> n >> m;
	map<int, int> a;

	rep(i, m) 
	{
		int s, c;
		cin >> s >> c;
		if ((a.count(s) && a.at(s) != c)|| (s == 1 && c == 0 && n != 1))
		{
			cout << "-1" << endl;
			return 0;
		}
		else 
			a[s] = c;
	}
	if (m == 0 && n == 1)
	{
		cout << "0" << endl;
		return 0;
	}
	rep(i, n)
	{
		if (a.count(i + 1))
			cout << a.at(i + 1);
		else if (i != 0)
			cout << "0";
		else
			cout << "1";
	}
	cout << endl;
}
