#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	rep(i, n)
	{
		string t;
		cin >> t;
		int cnt = 0;
		rep(j, t.size())
		{
			string u = t.substr(j, 5);
			if (u == "kyoto" || u == "tokyo")
			{
				cnt++;
				j += 4;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
