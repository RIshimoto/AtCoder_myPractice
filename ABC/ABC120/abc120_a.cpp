#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b)
		cout << 0 << endl;
	else if (a * c <= b)
		cout << c << endl;
	else
		cout << b / a << endl;
	return 0;
}
