#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int tx_a, ty_a; cin >> tx_a >> ty_a;
	int tx_b, ty_b; cin >> tx_b >> ty_b;
	int T; cin >> T;
	int V; cin >> V;
	int n; cin >> n;
	int x[n],y[n]; rep(i, n) cin >> x[i] >> y[i];

	for (int i = 0; i < n; i++)
	{
		int dis;
		dis = T * V;
		if ( dis >= sqrt((x[i] - tx_a) * (x[i] - tx_a) + (y[i] - ty_a) * (y[i] - ty_a)) + sqrt((tx_b - x[i]) * (tx_b - x[i]) + (ty_b - y[i]) * (ty_b -y[i])))
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
