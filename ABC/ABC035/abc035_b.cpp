#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int x, y, t, cnt;
	cin >> s >> t;
	x = y = cnt = 0;
	rep(i, s.size())
	{
		if ('L' == s[i])
			x -= 1;
		else if ('R' == s[i])
			x += 1;
		else if ('U' == s[i])
			y += 1;
		else if ('D' == s[i])
			y -= 1;
		else
			cnt++;
	}
	int ans = abs(x) + abs(y);
	if (t == 1)
		cout << ans + cnt << endl; 
	else
	{
		if (ans > cnt)
			cout << ans - cnt << endl;
		else 
			cout << (cnt - ans) % 2 << endl;
	}
	return 0;
}
