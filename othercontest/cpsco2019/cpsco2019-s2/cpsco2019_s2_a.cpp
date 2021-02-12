#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int m, n, p;
	cin >> m >> n;
	p = m / n;
	m -= p * (n - 1);
	cout << m << endl;
	return 0;
}
