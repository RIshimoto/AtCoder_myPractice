#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x[3],y[3];
	vector<int> a;
	rep(i, 3) {cin >> x[i]; a.push_back(x[i]);}

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	rep(i, 3)
		rep(j, 3)
			if (a.at(i) == x[j])
				y[j] = i + 1;
	rep(i, 3) cout << y[i] << endl;

}
