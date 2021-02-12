#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	int n, A, B;
	cin >> n;
	A = B = 0;
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		if (a < b)
			B += a + b;
		else if (a > b)
			A += a + b;
		else
		{
			A += a;
			B += b;
		}
	}
	cout << A << " " << B << endl;
	return 0;
}
