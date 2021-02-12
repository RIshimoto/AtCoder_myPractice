#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	vector<int> graph[n];
	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	queue<int> que;
	vector<int> label(n, -1);
	que.push(0);
	while(!que.empty())
	{
		int now = que.front();
		que.pop();
		for(int i = 0; i < graph[now].size(); i++)
		{
			if (label[graph[now][i]] != -1) continue; 
			label[graph[now][i]] = now + 1;
			que.push(graph[now][i]);
		}
	}
	for(int i = 1; i < n; i++)
	{
		if (label[i] == -1)
		{
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	for(int i = 1; i < n; i++)
	{
		cout << label[i] << endl;
	}
	return 0;
}
