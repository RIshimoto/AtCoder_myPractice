#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	long long n, m, ans, sum, dis;
	pair<long long, long long> p[50], q[50];

	cin >> n >> m;
	rep(i, n) cin >> p[i].first >> p[i].second;
	rep(i, m) cin >> q[i].first >> q[i].second;
	rep(i, n)
	{
		sum = abs(p[i].first - q[0].first) + \
			  abs(p[i].second - q[0].second);
		ans = 1;
		rep(j, m)
		{
			dis = abs(p[i].first - q[j].first) + \
				  abs(p[i].second - q[j].second);
			if (sum > dis)			
			{
				sum = dis;
				ans = j + 1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
