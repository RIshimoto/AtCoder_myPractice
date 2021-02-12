#include <bits/stdc++.h>
using namespace std;
signed main(void)
{
	int x, y, z;
	cin >> x >> y >> z;

	swap(x, y);
	swap(x, z);
	cout << x << " " << y << " " << z << endl;
	return 0;
}
