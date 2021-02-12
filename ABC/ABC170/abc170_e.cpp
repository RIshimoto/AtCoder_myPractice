#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;
#define MAX 200010

signed main(void)
{
	int n, q;
	cin >> n >> q;
	ll a[n], b[n];
	vector<multiset<ll>> s(MAX);
	multiset<ll> ms;

	rep(i, n)
	{
		cin >> a[i] >> b[i];
		s[b[i]].insert(a[i]);
	}
	rep(i, MAX)
	{
		if (s[i].size() != 0) 
			ms.insert(*s[i].rbegin());
	}
	rep(i, q)
	{
		ll c, d, ans;
		cin >> c >> d;
		c--;
		ms.erase(ms.find(*s[b[c]].rbegin()));
		s[b[c]].erase(s[b[c]].find(a[c]));
		if (s[b[c]].size() != 0)
			ms.insert(*s[b[c]].rbegin());

		b[c] = d;
		if (s[d].size() != 0)
			ms.erase(ms.find(*s[d].rbegin()));
		s[d].insert(a[c]);
		ms.insert(*s[d].rbegin());

		ans = *ms.begin();
		printf("%d\n", ans);
	}
	return 0;
}
