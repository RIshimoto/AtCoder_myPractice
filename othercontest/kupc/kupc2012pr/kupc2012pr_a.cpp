#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll accar(ll m, ll n)
{
	if (n == 0) return accar(m - 1, 1);
	if (m == 0) return n + 1;
	if (m == 1) return n + 2;
	if (m == 2) return n * 2 + 3;
	return accar(m - 1, accar(m, n - 1));
}

signed main(void)
{
	int m, n;
	cin >> m >> n;
	cout << accar(m, n) << endl;
	return 0;
}
