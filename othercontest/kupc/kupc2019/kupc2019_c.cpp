#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int m, k;
	cin >> m >> k;
	set<int> st;
	rep(j, k)
	{
		for(auto s : st)
		{
			for(int i = 1; i <= m; i++)
			{
				st.insert(s + i);
			}
		}
	}
}
