#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	char c_1, c_2; 
	int a, b, c;
	cin >> c_1 >> a >> c_2 >> b; 
	if (c_1 != c_2)
		c = a + b;
	else
		c = abs(a - b);
	cout << c / 15 << endl;
	return 0;
}
