#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, int>;

signed main(void)
{
	int n, k;
	cin >> n >> k;
	ll a[n], b[n], ans;
	priority_queue<P, vector<P>, greater<P>> pq;
	rep(i, n) 
	{
		cin >> a[i] >> b[i];
		pq.push(P(a[i], i));
	}
	ans = 0;
	rep(i, k)
	{
		P p = pq.top();
		pq.pop();
		ans += p.first;
		pq.push(P(p.first + b[p.second], p.second));
	}
	cout << ans << endl;
	return 0;
}
