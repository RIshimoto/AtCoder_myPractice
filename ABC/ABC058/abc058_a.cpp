#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	if (b - a == c - b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
