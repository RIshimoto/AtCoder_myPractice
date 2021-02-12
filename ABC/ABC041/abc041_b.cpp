#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (long long) a * b % mod * c % mod << endl;
	return 0;
}
