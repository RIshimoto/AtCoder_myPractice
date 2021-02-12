#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (n); i++)

signed main(void)
{
	vector<int> v(3);
	int ans;
	bool ok;
	
	rep(i, 3) cin >> v[i];
	ans = 0;
	ok = true;
	if (v[0] == v[1] && v[1] == v[2] && v[2] == v[0])
	{
		ok = false;
		rep(i, 3)
		{	
			if (v[i] % 2 != 0)
				ok = true;
		}
		if (!ok)
			ans = -1;
	}
	while(ok)
	{
		int tmp, tmp2;
		rep(i, 3)
		{
			if (v[i] % 2 != 0)
			{
				ok = false;
				break;
			}
		}
		sort(v.begin(), v.end());
		tmp = v[0];
		tmp2 = v[1];
		v[0] = (v[1] + v[2]) / 2;
		v[1] = (tmp + v[2]) / 2;
		v[2] = (tmp + tmp2) / 2;
		if (ok) ans++;
	}
	cout << ans << endl;
	return 0;
}
