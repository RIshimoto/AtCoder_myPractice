#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, j, cnt; cin >> n >> k;
	map<int, int> m;
	priority_queue<int, vector<int>, greater<int>> pq;

	cnt = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		m[a]++;
	}
	for(auto p : m) pq.push(p.second);
	j =  m.size() - k;
	rep(i, j)
	{
		cnt += pq.top();
		pq.pop();
	}
	cout << cnt << endl;
	return 0;
}
