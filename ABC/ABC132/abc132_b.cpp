#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;	cin >> n;
	vector<int> v(n);
	int cnt;
	rep(i, n) cin >> v[i];

	cnt = 0;
	for(int i = 1; i < n - 1; i++)
	{
		if ((v.at(i - 1) <= v.at(i) && v.at(i) <= v.at(i + 1))\
				|| (v.at(i - 1) >= v.at(i) && v.at(i) >= v.at(i + 1)))
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
