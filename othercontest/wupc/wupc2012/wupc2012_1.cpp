#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int m1, m2, d1, d2;
	int cnt;
	cin >> m1 >> d1 >> m2 >> d2;
	cnt = 0;
	while (!(m1 == m2 && d1 == d2))
	{
		d1++;
		if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
		{
			if (d1 == 31) 
			{
				m1++;
				d1 = 1;
			}
		}
		else if (m1 == 2)
		{
			if (d1 == 30)
			{
				m1++;
				d1 = 1;
			}
		}
		else
		{
			if (d1 == 32)
			{
				m1++;
				d1 = 1;
			}
		}
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
