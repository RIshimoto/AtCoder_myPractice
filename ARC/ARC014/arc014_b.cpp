#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	string w[n];
	set<string> st;
	rep(i, n) 
	{
		cin >> w[i];
		if ((i - 1 >= 0 && w[i - 1][w[i - 1].size() - 1] != w[i][0]) || st.count(w[i]))
		{
			if(i % 2 == 0)
			{
				cout << "LOSE" << endl;
				return 0;
			}
			else
			{
				cout << "WIN" << endl;
				return 0;
			}
		}
		else
			st.insert(w[i]);
	}
	cout << "DRAW" << endl;
	return 0;
}
