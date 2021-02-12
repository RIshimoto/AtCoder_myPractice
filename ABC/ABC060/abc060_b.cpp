#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c, sum;
	cin >> a >> b >> c;

	sum = 0;
	for (int i = 0; i < 100; i++)
	{
		if ((b * i + c) % a == 0)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	return 0;
}
