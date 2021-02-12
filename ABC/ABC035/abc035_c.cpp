#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int MAX = 200000;
bool imos[MAX + 1];
signed main(void)
{
	int n, q;
	cin >> n >> q;

	rep(i, q)
	{
		int l, r;
		cin >> l >> r;
		--l; --r;
		imos[l] ^= 1;
		imos[r + 1] ^= 1;
	}
	rep(i, n - 1) imos[i + 1] ^= imos[i];
	rep(i, n) cout << imos[i];
	cout << endl;
	return 0;
}
