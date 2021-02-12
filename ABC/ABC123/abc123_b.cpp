#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	vector<int> v(5), s(5);
	pair<int, int> tmp;
	int now;

	tmp.first = 9;
	tmp.second = 4;
	rep(i, 5)
	{
		cin >> v.at(i);
		if (v[i] % 10 != 0)
		{
			if (tmp.first > v[i] % 10)
			{
				tmp.first = v[i] % 10;
				tmp.second = i;
			}
		}
	}
	swap(v.at(tmp.second),v.at(4));
	now = v.at(0);
	rep(i, 4)
	{
		if (now % 10 != 0)
			now += (10 - now % 10);
		now += v.at(i + 1);
	}
	cout << now << endl;
	return 0;
}
