#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n, sum;
	cin >> n;
	vector<int> l(n);
	sum = 0;
	rep(i, n)
	{
		cin >> l[i];
		sum += l[i];
	}
	sort(l.rbegin(), l.rend());
	if (sum - l[0] > l[0])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
