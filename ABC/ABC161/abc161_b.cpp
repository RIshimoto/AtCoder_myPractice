#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, m, sum;
	cin >> n >> m;
	vector<long long> a(n);
	sum = 0;
	rep(i, n) 
	{
		cin >> a.at(i);
		sum += a.at(i);
	}
	sort(a.rbegin(), a.rend());
	bool ok = true;
	rep(i, m)
	{
		if (a[i] * 4 * m < sum)
			ok = false;
	}
	if (ok)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
