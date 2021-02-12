#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int h, w, k, sum, ans;
	cin >> h >> w >> k;
	string c[h];
	int t[h], y[w];
	sum = 0;
	rep(i, h) cin >> c[i];
	rep(i, h)  rep(j, w)
	{
		if (c[i][j] == '#')
			sum++;
	}
	rep(i, h) 
	{
		int tmp = 0;
		rep(j, w)
		{
			if (c[i][j] == '#')
				tmp++;
		}
		t[i] = tmp;
	}
	rep(j, w)
	{
		int tmp = 0;
		rep(i, h) 
		{
			if (c[i][j] == '#')
				tmp++;
		}
		y[j] = tmp;
	}
	ans = 0;
	for (int bit = 0; bit < (1 << h); bit++)
	{
		vector<int> tate;
		for (int i = 0; i < h; i++)
		{
			if (bit & (1 << i))
				tate.push_back(i);
		}
		for (int bit2 = 0; bit2 < (1 << w); bit2++)
		{
			vector<int> yoko;
			for (int i = 0; i < w; i++)
			{
				if (bit2 & (1 << i))
					yoko.push_back(i);
			}
			int cnt = 0;
			rep(i, tate.size()) cnt += t[tate[i]];
			rep(i, yoko.size()) cnt += y[yoko[i]];
			rep(i, tate.size()) rep(j, yoko.size())
			{
				if (c[tate[i]][yoko[j]] == '#')
					cnt--;
			}
			if (sum - cnt == k)
				ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
