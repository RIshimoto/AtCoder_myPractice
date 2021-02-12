#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];
	sort(p.rbegin(), p.rend());
	p[0] /= 2;
	int sum = 0;
	rep(i, n) sum += p[i];
	cout << sum << endl;
	return 0;
}
