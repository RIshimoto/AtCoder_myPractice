#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

signed main(void)
{
	int n, m, time;
	cin >> n >> m;

	time = 0;
	rep(i, m)
	{
		int a, b, c;
		cin >> a >> b >> c;
		time += c;
	}
	return 0;
}
