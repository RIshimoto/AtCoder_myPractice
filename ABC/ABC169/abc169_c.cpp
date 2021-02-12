#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll a, ans;
	string b;
	cin >> a >> b;
	ans = a * ((b[0] - '0') * 100 + (b[2] - '0') * 10 + (b[3] - '0')) / 100;
	cout << ans << endl;
	return 0;
}
