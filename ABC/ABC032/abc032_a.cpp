#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
	if (y == 0) return x;
	gcd(y, x%y);
}
int lcm (int x, int y)
{
	return x * y / gcd(x, y);
}
signed main(void)
{
	int a, b, n, l, i;
	cin >> a >> b >> n;
	l = lcm(a, b);
	i = 1;
	while(l * i < n) i++;
	cout << l * i << endl;
	return 0;
}
