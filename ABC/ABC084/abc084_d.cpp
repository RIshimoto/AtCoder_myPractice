#include <bits/stdc++.h>
#define FOR(j, a, b) for(int j = (a); j <= (b); j + 2)
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int q; cin >> q;
	int l[q], r[q]; rep(i, q) cin >> l[i] >> r[i];
	bool f[100001];
	int c[100002];
	
	rep(i, 100001) f[i] = false;
	rep(i, 100001) c[i] = 0;
	f[0] = f[1] = true;
	for (int i = 2; i < 100001; i++)
	{
		if (f[i])
			continue;
		for (int j = i + i; j < 100001; j+=i)
			f[j] = true;
	}
	for(int i = 3; i < 100001; i++)
		if (!f[i] && !f[(i + 1) / 2])
			c[i] += 1;
	for (int i = 0; i < 100001; i++) c[i + 1] += c[i];
	rep(i, q)
		cout << c[r[i]] - c[l[i] - 1] << endl;
	return 0;
}
