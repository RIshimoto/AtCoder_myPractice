#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	vector<int> p(3);
	int d, e;
	double ans;

	d = e = 0;
	rep(i, 3) 
	{
		cin >> p[i];
		d += p[i];
	}
	sort(p.begin(), p.end());
	if (p[0] + p[1] < p[2]) 
		e = p[2] - (p[1] + p[0]);
	ans = (d * d - e * e) * 3.14159265358979323;
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
