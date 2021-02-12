#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, x;
	cin >> a >> b >> x;
	if (x >= a && x <= a + b) 
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
