#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, cnt;
	set<int> st;

	cin >> n >> m;
	int a[m];
	cnt = 0;
	rep(i, m) cin >> a[i];
	for(int i = m - 1; i >= 0; i--)
	{
		if (!st.count(a[i]))
		{
			cout << a[i] << endl;
			st.insert(a[i]);
			cnt++;
		}
	}
	if (n != cnt)
	{
		for(int i = 1; i <= n; i++)
		{
			if (!st.count(i))
				cout << i << endl;
		}
	}
	return 0;
}
