#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<int>> friends(n);
	vector<vector<int>> block(n);
	int ans[n];

	rep(i, m)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;
		friends[a].push_back(b);
		friends[b].push_back(a);
	}
	rep(i, k) 
	{
		int a, b; 
		cin >> a >> b;
		a--; b--;
		block[a].push_back(b);
		block[b].push_back(a);
	}

	int label[n];
	int l = 0;
	queue<int> que;

	rep(i, n) label[i] = -1;
	for(int i = 0; i < n; i++)
	{
		if (label[i] != -1) 
			continue;
		l++;
		que.push(i);
		while (!que.empty())
		{
			int now = que.front();
			que.pop();
			label[now] = l; 
			for(int i = 0; i < friends[now].size(); i++)
			{
				if (label[friends[now][i]] != -1) continue; 
				label[friends[now][i]] = l;
				que.push(friends[now][i]);
			}
		}
	}

	map<int, int> mp;
	rep(i, n) mp[label[i]]++;
	rep(i, n)
	{
		ans[i] = mp[label[i]] - friends[i].size() - 1;
	}
	rep(i, n)
	{
		rep(j, block[i].size())
		{
			if (label[i] == label[block[i][j]])
				ans[i]--;
		}
	}
	rep(i, n) printf("%d%c", ans[i], i==n-1?'\n':' ');
	return 0;
}
