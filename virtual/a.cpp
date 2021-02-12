#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s;
	cin >> s;
	int n = s.size() - 1;
	ll ans;
	ans = 0;
	for (int bit = 0; bit < (1 << n); bit++)
	{
		string t;
		t += s[0];
		for (int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
				t += '+'; 
			t += s[i + 1];
		}
		ll sum = 0;
		for (int i = 0; i < t.size(); i++)
		{
			if (t[i] == '+')
			{
				ans += sum;
				sum = 0;
				continue;
			}
			sum = sum * 10 + t[i] - '0';
		}
		ans += sum;
	}
	cout << ans << endl;
	return 0;
}
