#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, sum;
	cin >> n >> m;
	int p[n];
	rep(i, n) cin >> p[i];
	sum = 0;
	rep(i, m)
	{
		int index;
		cin >> index;
		index--;
		sum +=  p[index];
	}
	cout << sum << endl;
	return 0;
}
