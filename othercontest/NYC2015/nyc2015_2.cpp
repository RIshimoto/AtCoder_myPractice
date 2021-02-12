#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, wei, cnt;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	sort(a.begin(), a.end());
	wei = cnt = 0;
	rep(i, n)
	{
		if (wei < a[i])
		{
			wei += a[i];
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
