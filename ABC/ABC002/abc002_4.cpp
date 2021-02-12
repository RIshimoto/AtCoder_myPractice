#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

int	main(void)
{
	int n,m;
	cin >> n >> m;
	bool flag;
	bool flag2;
	int max;

	max = 1;
	Graph G(n);
	for (int i = 0; i < m; i++)
	{
		int a,b;
		cin >> a>> b;
		a--;
		b--;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	for (int bit = 0; bit < (1 << n); bit++)
	{
		vector<int> s;
		for (int i = 0; i < n; ++i)
		{
			if (bit & (1<<i))
				s.push_back(i);
		}
		flag = true;
		flag2 = true;
		for (int i = 0; i < s.size(); i++)
		{
			if (flag && flag2)
				flag = false;
			else
				break;
			for (int k = 0; k < s.size(); k++)
			{
				if (s[k] == s[i])
					continue;
				if (flag2)
					flag2 = false;
				else
					break;
				for(int j = 0; j < G.at(s[i]).size(); j++)
				{
					if (s[k] == G.at(s[i]).at(j))  
					{
						flag = true;
						flag2 = true;
						break;
					}
					
				}
			}
		}
		if (flag && flag2)
			if (max < s.size())
				max = s.size();
			
	}
	cout << max << endl;
}
