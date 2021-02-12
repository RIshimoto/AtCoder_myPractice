#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<bool> visit(n, false);
	vector<int> graph[n];
	vector<int> out;
	rep(i, n - 1)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(0);
	while(!pq.empty())
	{
		int now = pq.top();
		pq.pop();
		out.push_back(now + 1);
		visit[now] = true;
		for(int i = 0; i < graph[now].size(); i++)
		{
			if (visit[graph[now][i]]) continue;
			pq.push(graph[now][i]);
		}
	}
	rep(i, out.size())
	{
		printf("%d%c", out[i], i == out.size() - 1 ? '\n':' ');
	}
	return 0;
}
