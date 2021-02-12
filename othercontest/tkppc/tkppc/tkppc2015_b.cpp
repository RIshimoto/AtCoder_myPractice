#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, ans_i, ans;
	cin >> n;
	ans_i = 1;
	ans = -1;
	rep(i, n)
	{
		int a;
		cin >> a;
		if (ans < a)
		{
			ans = a;
			ans_i = i + 1;
		}
	}
	cout << ans_i << endl;
	return 0;
}
