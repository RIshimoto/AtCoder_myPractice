#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n;
	int cnt[2], tmp;

	cin >> n;
	vector<int> p(n), q(n);
	rep(i, n) cin >> p[i];
	rep(i, n) cin >> q[i];
	if (p[0] > q[0]) swap(p, q);
	int ans;
	ans = 0;
	do{
		if (p == q) break;
		ans++;
	}while(next_permutation(p.begin(), p.end()));
	cout << ans << endl;
	return 0;
}
