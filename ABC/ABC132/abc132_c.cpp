#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n; cin >> n;
	int ctr_l, ctr_r;
	vector<int> d(n);

	rep(i, n) cin >> d[i];
	sort(d.begin(), d.end());
	ctr_l = d.at(d.size() / 2 - 1); 
	ctr_r = d.at(d.size() / 2);
	cout << ctr_r -  ctr_l << endl;
	return 0;
}
