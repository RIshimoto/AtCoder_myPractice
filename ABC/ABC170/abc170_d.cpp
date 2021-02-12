#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;
#define MAX 1e6 + 10

signed main(void)
{
	int n;
	cin >> n;
	ll ans;
	vector<bool> search(MAX, false);
	set<int> st, e;

	rep(i, n) 
	{
		int b;
		cin >> b;
		if (!st.count(b))
			st.insert(b);
		else
			e.insert(b);
	}
	for (auto x : st)
	{
		for(ll j = 2; j * x < MAX; j++)
			search[j * x] = true;
	}
	cout << endl;
	ans = 0;
	for(auto d : e)
		st.erase(d);
	for (auto x : st)
	{
		if (!search[x])
			ans++;
	}
	cout << ans << endl;
	return 0;
}
