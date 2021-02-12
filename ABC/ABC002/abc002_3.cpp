#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main()
{
	double x1, y1;
	double x2, y2;
	double x3, y3;
	double tmp;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	tmp = (double) ((x1 - x3) * (y2 - y3) - (x2 - x3) * (y1 - y3));
	if (tmp < 0)
		tmp *= -1.0;
	printf("%.1f\n",tmp/2);
	return (0);
}
