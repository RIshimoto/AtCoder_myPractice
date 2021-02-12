#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt, mx;
	cin >> n;
	int a[n];
	cnt = 1;
	mx = 1;
	rep(i, n) 
	{
		cin >> a[i];
		if (a[i] == 1)
		{
			cnt++;
			mx = max(cnt, mx);
		}
		else
			cnt = 1;
	}
	cout << mx << endl;
	return 0;
}
