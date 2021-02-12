#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int k, n;
	vector<int> B;
	int power3;

	cin >> k >> n;
	vector<char> tmp(n);
	string v[n], w[n];
	rep(i, n) cin >> v[i] >> w[i];
	B.resize(k);
	for (int x = 0; x <= n; x++)
	{
		rep(i, k) B[i] = 0;
		power3 = 1;
		for (int i = 0; i < k; i++)
		{
			B[i] = (x / power3) % 3;
			power3 *= 3;
			tmp[i] = B[i] + 'a';
		}
		bool ok = true;
		rep(i, n)
		{
			if (!ok) break;
			string s;
			rep(j, v[i].size())
				s += tmp[v[i][j] - '0'];
			if (s != w[i])
				ok = false;
		}
		if (ok) rep(i, n) cout << tmp[i] << endl;
	}
	return 0;
}
