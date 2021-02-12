#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n, m, d;
	ll ans, cnt, tmp;
	string s;
	cin >> n >> s; 
	m = s.size();
	d = 0;
	while (d < m && s[d] =='A') d++; 
	tmp = 0;
	if (d == m)
	{			
		tmp = (ll)m * n;
		ans = tmp * (tmp + 1) / 2;
	}
	else
	{
		ans = cnt = 0;
		rep(i, m)
		{
			if (s[i] == 'A')
				cnt++;
			else
				cnt = 0;
			tmp += cnt;
		}
		ans += tmp;
		tmp += d * cnt;
		ans += tmp * (n - 1);
	}
	cout << ans << endl;
	return 0;
}
