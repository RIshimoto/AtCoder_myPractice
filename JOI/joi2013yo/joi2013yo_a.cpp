#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int l, a, b, c, d;
	int kokugo, sugaku;
	cin >> l >> a >> b >> c >> d;
	kokugo = a / c;
	if (a % c != 0)
		kokugo++;
	sugaku = b / d;
	if (b % d != 0)
		sugaku++;
	cout << l - max(kokugo, sugaku) << endl; 	
	return (0);
}
