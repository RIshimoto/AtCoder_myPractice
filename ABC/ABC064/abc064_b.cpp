#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, tmp, ans;
	cin >> n;
	set<int> s;

	rep(i, n)
	{
		int a;
		cin >> a;
		s.insert(a);
	}
	tmp = -1;
	ans = 0;
	for (auto value : s)
	{
		if (tmp != -1)
		 ans += value - tmp;
		tmp = value;
	}
	cout << ans << endl;
	return 0;
}
