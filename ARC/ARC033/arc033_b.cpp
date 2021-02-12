#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, cnt;
	double ans;
	set<int> st;

	cin >> n >> m;
	rep(i, n)
	{
		int a;
		cin >> a;
		st.insert(a);
	}
	cnt = 0;
	rep(i, m)
	{
		int b;
		cin >> b;
		if (st.count(b))
			cnt++;
		else
			st.insert(b);
	}
	ans = (double) cnt / st.size();
	cout << fixed << setprecision(20) << ans << endl;
	return 0;
}
