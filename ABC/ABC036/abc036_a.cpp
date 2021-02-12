#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int a, b;
	cin >> a >> b;
	if (b % a == 0)
		cout << b / a << endl;
	else
		cout << b / a + 1 << endl;
	return 0;
}
