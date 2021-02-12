#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k;
	set<int> st;

	cin >> n >> k;
	rep(i, k)
	{
		int d;
		cin >> d;
		rep(j, d)
		{
			int a;
			cin >> a;
			st.insert(a);
		}
	}
	int ans = n - st.size();
	cout << ans << endl;
	return 0;
}
