#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	long long n, ans, sum;
	cin >> s;
	n = s.size();
	ans = 0;
	rep(i, n) ans = ans * 10 + (s[i] - '0');
	for (int bit = 1; bit < (1 << n - 1); bit++)
	{
		vector<char> v;
		rep(i, n)
		{
			v.push_back(s[i]);
			if (1 << i & bit)
				v.push_back('+');
		}
		sum = 0;
		rep(i, v.size())
		{
			if (v[i] != '+')
				sum = sum * 10 + (v[i] - '0');
			else
			{
				ans += sum;
				sum = 0;
			}
		}
		ans += sum;
	}
	cout << ans << endl;
	return 0;
}
