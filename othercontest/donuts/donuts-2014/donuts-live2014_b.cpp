#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll s;
int n, m = 7;
vector<ll> st;

int keta(ll s)
{
	int cnt;
	cnt = 0;
	while (s)
	{
		s /= 10;
		cnt++;
	}
	return cnt;
}

bool check(void)
{
		return true;
	return false;
}

int dfs(int i, int k)
{
	int cnt = 0;
	for (int j = 1; j <= 7; j++)
	{
		st[i] = j;
		if (i == k - 1)
		{
			ll num = 0;
			rep(i, st.size())
				num = num * 10 + st[i];
			if (num % 7 == 0 && num <= s)
				cnt++;
			if (num > s)
				return cnt;
		}
		else
			cnt += dfs(i + 1, k);
	}
	return cnt;
}

signed main(void)
{
	ll ans;
	cin >> s;
	n = keta(s);
	ans = 0;
	for (int i = 1; i <= n; i++)
	{
		st = vector<ll>(i);
		ans += dfs(0, i);
	}
	cout << ans << endl;
	return 0;
}
