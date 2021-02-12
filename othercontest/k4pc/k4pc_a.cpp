#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;
typedef long long ll;

signed main(void)
{
	int n, sum;
	cin >> n;
	sum = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		sum += abs(a - (i + 1));
	}
	sum /= 2;
	cout << sum << endl;
	return 0;
}
