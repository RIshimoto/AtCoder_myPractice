#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e; 
	cout << min(a, min(b, c)) + min(d, e) - 50 << endl;
	return 0;
}
