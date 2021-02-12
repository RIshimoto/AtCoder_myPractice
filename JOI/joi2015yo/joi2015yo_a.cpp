#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int a, b, c, d, p;
	cin >> a >> b >> c >> d >> p;
	cout << min(p * a , b + max(p - c, 0) * d) << endl;
	return 0;
}
