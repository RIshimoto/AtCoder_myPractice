#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll n;
	ll plus, sum;
	cin >> n;
	plus = 2;
	sum = 1;
	while (sum + plus <= n + 1)
	{
		sum += plus;
		plus++;
	}
	plus--;
	cout << n - plus + 1 << endl;
	return 0;
}
