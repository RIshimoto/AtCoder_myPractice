#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, l;
	long long ans;
	vector<long long> b(3);

	cin >> n >> m >> l;
	rep(i, 3) cin >> b[i];
	sort(b.begin(), b.end());
	ans = 0;
	do{
		ans = max(ans, (n / b[0]) * (m / b[1]) *  (l / b[2]));
	}while(next_permutation(b.begin(), b.end()));
	cout << ans << endl;
	return 0;
}
