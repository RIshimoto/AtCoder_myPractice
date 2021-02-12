#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	int v[n];
	cin >> n;
	rep(i, n) cin >> v[i];
	cnt = 0;
	rep(i, n)
	{
		int f;
		cin >> f;
		if (v[i] < f * 2)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
