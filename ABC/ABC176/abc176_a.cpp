#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0;  i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	int n, x, t, cnt;
	cin >> n >> x >> t;
	cnt = n / x;
	if (n % x != 0)
		cnt++;
	cout << cnt * t << endl;
	return 0;
}
