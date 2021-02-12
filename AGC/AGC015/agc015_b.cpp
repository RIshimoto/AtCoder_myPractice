#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	long long ans, n;

	cin >> s;
	n = s.size();
	ans = 0;
	for(int i = 0; i < n; i++)
	{
		if (s[i] == 'U')
			ans += i * 2 + (n - i - 1);
		else if (s[i] == 'D')
			ans += i + (n - i - 1) * 2; 
	}
	cout << ans << endl;
	return 0;
}
