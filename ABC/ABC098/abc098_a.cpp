#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	cin >> a >> b;
	cout << max(a + b, max(a - b, a * b)) << endl;
	return 0;
}
