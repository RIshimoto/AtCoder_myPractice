#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

const int INF = 1e9;
signed main(void)
{
	int n, T, cnt, x;
	cin >> n >> T;
	int p[n];
	vector<int> s[n], t[n];
	vector<pair<P, bool>> score[n]; 

	rep(i, n) 
	{
		cin >> p[i];
		cnt += p[i];
	}
	rep(i, n) rep(j, p[i]) {int a; cin >> a; s[i].push_back(a);}
	rep(i, n) rep(j, p[i]) {int a; cin >> a; t[i].push_back(a);}
	rep(i, n) rep(j, p[i]) score[i].push_back(make_pair(P(s[i][j], t[i][j]),false));
	int time = 0;
	x = 0;
	while (time < T && x < cnt)
	{
		ll mn_score, mn_time;
		P tmp_i;
		mn_score = INF;
		mn_time = 0;
		rep(i, n)
		{
			rep(j, p[i])
			{
				if (score[i][j].second) continue;
				if (mn_score > score[i][j].first.first)
				{
					mn_score = score[i][j].first.first;
					mn_time = score[i][j].first.second;
					tmp_i = P(i, j);
					break;
				}	
			}
		}
		time += mn_time;
		if (time > T) break;
		score[tmp_i.first][tmp_i.second].second = true;
		x++;
	}
	ll ans = 0;
	rep(i, n)
	{
		ll sum = 0;
		int j = 0;
		while (score[i][j].second && j < p[i]) 
		{
			sum = score[i][j].first.first;
			j++;
		}
		ans += sum; 
	}
	cout << ans << endl;
	return 0;
}
