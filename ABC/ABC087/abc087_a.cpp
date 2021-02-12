#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x, a, b;
	cin >> x >> a >> b;

	x -= a;
	x %= b;
	cout << x << endl;
}
