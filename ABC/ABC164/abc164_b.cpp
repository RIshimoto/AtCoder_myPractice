#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, d;
	int aoki, taka;
	cin >> a >> b >> c >> d;
	aoki = c / b;
	if (c % b != 0)
		aoki++;
	taka = a / d;
	if (a % d != 0)
		taka++;
	if (taka >= aoki)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
