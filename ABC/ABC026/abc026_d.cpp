#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int A, B, C;
const double PI = 3.14159265358979238462643383279;
double f(double x)
{
	return A * x + B * sin(C * x * PI);
}

signed main(void)
{
	cin >> A >> B >> C;
	double low = 0, high = 1e12, mid;
	rep(i, 1e6)
	{
		mid = (low + high) / 2;
		if (f(mid) < 100)
			low = mid;
		else
			high = mid;
	}
	cout << fixed << setprecision(20) << mid << endl;
	return 0;
}
