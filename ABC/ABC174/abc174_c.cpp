#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int k, ans;
	ll num;
	set<int> st;
	bool ok;
	cin >> k;
	num = 7;
	ans = 1;
	ok = true;
	while (num % k != 0)
	{
		ans++;
		num %= k;
		if (!st.count(num))
			st.insert(num);
		else
		{
			ok = false;
			break;
		}
		num = num * 10 + 7;
	}
	if (ok)
		cout << ans << endl;
	else
		cout << -1 << endl;
	return 0;
}
