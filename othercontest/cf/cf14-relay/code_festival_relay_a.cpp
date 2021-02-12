#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, ans;
	vector<bool> ok(110, true);

	cin >> n;
	ans = 0;
	ok[0] = ok [1] = false;
	for (int i = 2; i <= sqrt(n); i++) 
	{
		if (ok[i])
		{
			if (i % 2 == 0)
				ans++;
			for (int j = 0; i * (j + 2) < n; j++)
			{	
				ok[i * (j + 2)] = false;
			}
		}
	}
	if (n == 3) ans++;
	cout << ans << endl;
	return 0;
}

