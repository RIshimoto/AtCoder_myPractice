#include <bits/stdc++.h> 
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, t, ans;
	cin >> n >> t;
	int a[n];
	rep(i, n) cin >> a[i];
	for(int i = 1; i < n; i++)
	{
		while (a[i] < a[i - 1]) a[i] += t;
	}
	cout << a[n - 1] << endl;
	return 0;
}
