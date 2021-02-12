#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	priority_queue<int> q;
	int n, m;
	long long ans;

	cin >> n >> m;
	rep(i, n)
	{
		int a;
		cin >> a;
		q.push(a);
	}
	rep(i, m)
	{
		int p;
		p = q.top();
		q.pop();
		q.push(p / 2);
	}
	ans = 0;
	while(!q.empty())
	{
		ans += q.top();
		q.pop();
	}
	cout << ans << endl;
	return 0;
}
