#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<ll, ll>;

signed main(void)
{
	ll n, x, m;
	ll next;
	ll ans, sum;
	ll tmp, cnt;
	set<ll> st;
	vector<ll> vec, cnts;

	cin >> n >> x >> m;
	next = x;
	ans = 0;
	while (!st.count(next) && n > 0)
	{
		st.insert(next);
		ans += next;
		vec.push_back(next);
		cnts.push_back(ans);
		next = next * next % m;
		n--;
	}
	sum = ans; 
	rep(i, vec.size())
	{
		if (vec[i] == next)
		{
			tmp = i;
			if (i - 1 >= 0)
				sum -= cnts[i - 1];
			break;
		}
	}
	ans += n / (vec.size() - tmp) * sum;
	rep(i, n % (vec.size() - tmp))
		ans += vec[tmp + i];
	cout << ans << endl;
	return 0;
}
