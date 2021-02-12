#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

const int INF = 1e9;
signed main(void)
{
	string s;
	int n, ans, sum, cnt;

	cin >> s;
	n = s.size();
	ans = INF;
	for (int bit = 1; bit < (1 << n); bit++)
	{
		sum = cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (bit & (1 << i))
				sum += s[i] - '0';
			else
				cnt++;
		}
		if (sum % 3 == 0)
			ans = min(ans, cnt);
	}
	cout << (ans == INF ? -1 : ans) << endl;
	return 0;
}
