#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	int n, k;
	vector<int> a;
	cin >> n >> k;

	int t[n][n];
	for (int i = 1; i < n; i++) a.push_back(i);
	rep(i, n) rep(j, n) cin >> t[i][j];
	int ans = 0;
	do{
		int sum = 0;
		sum += t[0][a[0]];
		rep(i, n - 2) 
			sum += t[a[i]][a[i + 1]];
		sum += t[a[n - 2]][0];
		if (sum == k) ans++;
	}while(next_permutation(a.begin(), a.end()));
	cout << ans << endl;
	return 0;
}
