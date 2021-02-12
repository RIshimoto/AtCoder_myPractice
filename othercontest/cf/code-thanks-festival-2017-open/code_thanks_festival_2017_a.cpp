#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<int> t(8);
	rep(i, 8)
		cin >> t[i];
	sort(t.rbegin(), t.rend());
	cout << t[0] << endl;
	return 0;
}
