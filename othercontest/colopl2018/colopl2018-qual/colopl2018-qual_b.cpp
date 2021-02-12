#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, x;
	long long sum;
	string s;
	cin >> n >> x >> s;
	int t[n];
	sum = 0;
	rep(i, n)
	{
		cin >> t[i];
		if (s[i] == '1' && t[i] > x)
			sum += x;
		else
			sum += t[i];
	}
	cout << sum << endl;
	return 0;
}
