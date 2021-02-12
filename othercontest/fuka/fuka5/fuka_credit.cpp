#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	while (true)
	{
		int n, k, now;
		cin >> n >> k;
		if (n == 0 && k == 0)
			break;
		vector<int> x(n);
		rep(i, n)cin >> x[i];
		sort(x.begin(), x.end());
		now = 0;
		rep(i, k) now += x[i]; 
		cout << now << endl; 
	}
	return 0;
}
