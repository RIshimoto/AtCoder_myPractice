#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	ll n, mx;
	cin >> n;
	vector<int> p(n), q(n + 1, 0);
	vector<int> out;
	set<int> st;
	rep(i, n) 
	{
		cin >> p[i];
		q[p[i]] = i;
	}
	mx = n;
	while (!st.count(min(q[mx], q[p[q[mx]]])))
	{
		int tmp = q[mx];
		swap(p[tmp], p[tmp + 1]); 
		st.insert(min(tmp, q[p[q[mx]]]));
		swap(q[mx], q[p[q[mx]]]);
		out.push_back(min(q[mx], q[p[q[mx]]]));
		while (q[mx] == mx - 1) mx--;
		if (mx == 0)
		{
			if (st.size() != n - 1)
				break;
			rep(i, out.size()) cout << out[i] << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
