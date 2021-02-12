#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n , p;
	long long ans, cnt;
	cin >> n >> p;
	
	ans = cnt = 0;
	rep(i, n) 
	{
		int a;
		cin >> a;
		if (a % 2 == 0)
			cnt++;
	}
	if (cnt == n)
	{
		if (p == 0)
			ans = pow(2, n);
	}
	else
	{
		ans = pow(2, n - 1);
	}
	cout << ans << endl;
	return 0;
}
