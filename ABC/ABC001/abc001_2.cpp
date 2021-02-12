#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	double m;
	double vv;

	cin >> m;
	m /= 1000;
	if (m < 0.1)
		vv = 0;
	else if (m >= 0.1 && m <= 5)
		vv = m * 10; 
	else if (m >= 6 && m <= 30)
		vv = m + 50;
	else if (m >= 35 && m <= 70)
		vv = (m - 30) / 5 + 80;
	else if (m > 70)
		vv = 89;
	if (vv < 10)
		cout << 0 << (int)vv << endl;
	else
		cout << (int)vv << endl;
	return (0);
	
}
