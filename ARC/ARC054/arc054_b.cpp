#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

double P;
double f(double x)
{
	return (x + 1 / pow(2, x / 1.5) * P);
}

signed main(void)
{
	cin >> P;
	int cnt;
	double low, high;
	double c1, c2;
	low = 0; high = 1e9;
	cnt = 500;
	while (cnt--)
	{
		c1 = (low * 2 + high) / 3;
		c2 = (low + high * 2) / 3;
		if (f(c1) < f(c2))
			high = c2;
		else
			low = c1;
	}
	cout << fixed << setprecision(10) << f(low) << endl;
	return 0;
}
