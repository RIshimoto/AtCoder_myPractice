#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x, cnt;
	vector<int> v;

	cin >> x;
	for(int b = 1; b <= x; b++)
	{
		cnt = b;
		for(int p = 0; p <= x; p++)
		{
			cnt *= b;
			if (cnt <= x)
				v.push_back(cnt);
			else
				break;
		}
	}
	sort(v.rbegin(), v.rend());
	cout << v[0] << endl;
	return 0;
}
