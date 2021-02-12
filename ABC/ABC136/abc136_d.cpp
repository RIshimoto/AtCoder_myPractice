#include <bits/stdc++.h>
#define For(i, a, b) for(int i = a; i < b; i++)
#define rep(i, n) For(i, 0, n)
using namespace std;

signed main(void)
{
	int n;
	string s;
	cin >> s;
	n = s.size();
	vector<int> ans(n);
	rep(ri, 2)
	{
		int cnt = 0;
		rep(i, n)
		{
			if (s[i] == 'R') cnt++;
			else {
				ans[i] += cnt / 2;
				ans[i - 1] += (cnt + 1) / 2;
				cnt = 0;
			}
		}
		rep(i, n)
		{
			printf("%d%c", ans[i], i==n-1?'\n':' ');
		}
		reverse(ans.begin(), ans.end());
		reverse(s.begin(), s.end());
		rep(i, n)
		{
			if (s[i] == 'L') s[i] = 'R';
			else s[i] = 'L';
		}
	}
	rep(i, n)
	{
		printf("%d%c", ans[i], i==n-1?'\n':' ');
	}
	return 0;
}
