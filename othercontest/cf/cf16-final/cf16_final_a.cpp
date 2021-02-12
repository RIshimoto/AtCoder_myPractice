#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int h, w;
	cin >> h >> w;
	rep(i, h) rep(j, w) 
	{
		string s;
		cin >> s;
		if (s == "snuke")
		{
			char ans = j + 'A';
			cout << ans << i + 1 << endl;
			return 0;
		}
	}
}
