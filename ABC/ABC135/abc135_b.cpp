#include <bits/stdc++.h>
#define For(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) For(i, 0, n)
using namespace std;

signed main(void)
{
	int n;
	vector<int> p(50);
	bool flag;

	cin >> n;
	rep(i, n) cin >> p[i];
	rep(i, n - 1)
	{
		For(k, i, n)
		{
			swap(p[i], p[k]);
			flag = true;
			rep(j, n - 1)
			{
				if (p[j] > p[j + 1])
				{
					flag = false;
					break;
				}
			}
			if (flag)
			{
				cout << "YES" << endl;
				return 0;
			}
			swap(p[k], p[i]);
		}
	}
	cout << "NO" << endl;
	return 0;
}
