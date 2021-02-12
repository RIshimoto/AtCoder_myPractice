#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, sum;
	cin >> n;
	sum = 0;
	rep(i, n) 
	{
		int a;
		cin >> a;
		sum += a;
	}
	cout << sum << endl;
	return 0;
}
