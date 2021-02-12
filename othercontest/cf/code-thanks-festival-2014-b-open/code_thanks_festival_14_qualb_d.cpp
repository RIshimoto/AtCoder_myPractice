#include <bits/stdc++.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using P = pair<int, int>;

signed main(void)
{
	int n, t, cnt;
	cin >> n >> t;
	priority_queue<P, vector<P>, greater<P>> pq;
	map<int, int> mp;
	int a[n];
	cnt = 0;
	rep(i, n) 
	{
		cin >> a[i];
		pq.push(P(a[i], a[i]));
		mp[a[i]]++;
		cnt = max(mp[a[i]], cnt);
	}
	while (pq.top().first <= t)
	{
		auto now = pq.top(); pq.pop();
		auto p = now.first;
		auto q = now.second;
		p += q;
		mp[p]++;
		pq.push(P(p, q));
		if (p > t) continue;
		cnt = max(cnt, mp[p]);
	}
	cout << cnt << endl;
	return 0;
}
