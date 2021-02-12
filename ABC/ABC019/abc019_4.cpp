#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int dist_mx, dist_i;
	for(int i = 2; i <= n; i++)
	{
		int dist;
		cout << "? " << 1 << " " << i << endl;
		cin >> dist;
		if (dist > dist_mx)
		{
			dist_mx = dist;
			dist_i = i;
		}
	}
	int ans = 0;
	for(int i = 1; i <= n; i++)
	{
		int dist;
		if (dist_i == i) continue;
		cout << "? " << dist_i << " " << i << endl;
		cin >> dist;
		ans = max(dist, ans);
	}
	cout << "! " << ans << endl;
	return 0;
}
