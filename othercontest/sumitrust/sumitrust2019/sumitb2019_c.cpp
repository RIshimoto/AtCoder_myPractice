#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, l;

	cin >> n;
	m = n / 100;
	l = n % 100;
	if (m * 5 >= l)
		cout << 1 << endl; 
	else
		cout << 0 << endl;
	return 0;
}
