#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll check(string t, char c, char d)
{
	ll cnt, ans;
	int r;
	
	rep(i, t.size())
	{
		if (t[i] == '?')
		{
			if (i % 2 == 0)
				t[i] = c;
			else
				t[i] = d;
		}
	}
	r = 0;
	cnt = ans = 0;
	while (r < t.size())
	{
		if (t.substr(r, 2) == "25")
		{
			r += 2;
			cnt += 2;
			ans = max(ans, cnt);
		}
		else
		{
			r++;
			cnt = 0;
		}
	}
	return ans;
}

signed main(void)
{
	string t;
	cin >> t;
	cout << max(check(t, '2', '5'), check(t, '5', '2')) << endl;
	return 0;
}
