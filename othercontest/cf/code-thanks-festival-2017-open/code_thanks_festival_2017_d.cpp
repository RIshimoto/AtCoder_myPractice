#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int gcd(int x, int y)
{
	if (y == 0) return x;
	return gcd(y, x % y);
}

signed main(void)
{
	int n, m;
	cin >> n >> m;
	cout << m - gcd(n, m) << endl;
	return 0;
}
