#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b, c, d, x, y;
	cin >> n >> a >> b >> c >> d;
	x = n / a; 
	if (n % a != 0) x++;
	y = n / c; 
	if (n % c != 0) y++;
	cout << min(x * b, y * d) << endl;  
	return 0;
}
