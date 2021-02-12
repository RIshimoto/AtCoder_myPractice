#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, a, b;
	cin >> n >> m >> a >> b;
	vector<int> imos(110, 0);
	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		imos[a] += 1;
		imos[b + 1] += -1;
	}
	rep(i, n - 1) imos[i + 1] += imos[i];
	int cnt = 0;
	rep(i, n)
	{
		if (imos[i])
			cnt++;
	}
	long long ans;
	ans = cnt * a + (n - cnt) * b;	
	cout << ans << endl;
	return 0;
}
