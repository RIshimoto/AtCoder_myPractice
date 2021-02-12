#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, k, cnt, tmp;
	string s, t, u;
	map<char, int> mp;
	cin >> n >> k >> s;

	t = "";
	u = s;
	sort(u.begin(), u.end());
	cnt = 0;
	rep(i, n - 1)
	{
		int j = i + 1;
		for(char c = u[j]; c < u[n - 1]; j++)
		{
			rep(j, n)
			{
			}
			if (t + c)
			{
				t += c;
				break;
			}
		}
	}
	cout << s << endl;
	return 0;
}
