#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c, d;
	int imos[101];
	int cnt;

	cnt = 0;
	cin >> a >> b >> c >> d;
	for (int i = 0; i <= 100; i++) imos[i] = 0;
	for (int i = a; i <= b; i++) imos[i] += 1;
	for (int i = c; i <= d; i++) imos[i] += 1;

	for (int i = 0; i <= 100; i++)
	{
		if (imos[i] >= 2)
			cnt++;
	}
	cout << cnt - 1 << endl;
	return 0;
}
