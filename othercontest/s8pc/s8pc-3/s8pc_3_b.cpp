#include <bits/stdc++.h>
#define rep(i, n) for(ll i = 0; i < (n); i++)
using namespace std;
typedef long long ll; 

vector<vector<ll>> cell(50, vector<ll> (50));
vector<vector<ll>> tmp_cell(50, vector<ll> (50));
ll h, w, k;
ll ans;

void drop(void);
ll del(ll m, bool *next);
void solve(void)
{
	ll p;
	ll sum;

	bool next;
	rep(i, h) rep(j, w)
	{
		tmp_cell = cell;
		tmp_cell[i][j] = 0;
		p = 0;
		sum = 0;
		next = true;
		while (next)
		{
			drop();
			sum += del(p, &next);
			p++;
		}
		ans = max(sum, ans);
	}
}

void drop()
{
	ll s;

	for (ll i = h - 1; i >= 1; i--)
	{
		rep(j, w)
		{
			if (tmp_cell[i][j] == 0)
			{
				s = i - 1;
				while (s >= 0 && tmp_cell[s][j] == 0)
					s--;
				if (s >= 0)
					swap(tmp_cell[i][j], tmp_cell[s][j]);
			}
		}
	}
}

ll del(ll m, bool *next)
{
	ll l, r;
	ll sum;

	sum = 0;
	*next = false;
	rep(i, h)
	{
		l = 0; r = 0;
		while (r < w)
		{
			while (tmp_cell[i][l] == 0){
				l++; 
				r++;
			}
			while(r < w && tmp_cell[i][l] == tmp_cell[i][r])
				r++;
			if (r - l >= k)
			{
				sum += tmp_cell[i][l] * (r - l) * pow(2, m);
				for (ll k = l; k < r; k++)
					tmp_cell[i][k] = 0;
				*next = true;
				break;
			}
			l = r;
		}
	}
	return (sum);
}

signed main(void)
{
	ll p;
	bool next;

	cin >> h >> w >> k;
	string s[h];
	rep(i, h) cin >> s[i];
	rep(i, h) rep(j, w)
		cell[i][j] = s[i][j] - '0';
	if (k < 4)
		solve();
	cout << ans << endl;
	return 0;
}
