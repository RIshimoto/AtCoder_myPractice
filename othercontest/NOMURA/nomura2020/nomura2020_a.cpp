#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

signed main(void)
{
	int h1, m1, h2, m2, k;
	cin >> h1 >> m1 >> h2 >> m2 >> k;
	cout << (ll)(h2 - h1) * 60 + (m2 - m1) - k << endl;
	return 0;
}
