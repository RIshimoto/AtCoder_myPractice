#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

bool uru(int y)
{
	if (y % 4 == 0)
	{
		if (y % 100 == 0 && y % 400 != 0)
			return 0;
		else
			return 1;
	}
	return 0;
}

signed main(void)
{
	string s;
	int y, m, d;

	cin >> s;
	y = atoi(s.substr(0, 4).c_str());
	m = atoi(s.substr(5, 2).c_str());
	d = atoi(s.substr(8, 2).c_str());
	while (y % (m * d) != 0)
	{
		d++;
		if (m == 4 || m == 6 || m == 9 || m == 11) 
		{
			if (d == 31)
			{
				d = 1;
				m++;
			}
		}
		else if (m == 2)
		{
			if (!uru(y))
			{
				if (d == 29)
				{
					d = 1;
					m++;
				}
			}	
			else 
			{
				if (d == 30)
				{
					d = 1;
					m++;
				}
			}
		}
		else
		{
		   	if (d >= 32)
			{
				d = 1;
				m++;
			}
		}
		if (m >= 13)
		{
			m = 1;
			y++;
		}
	}
	printf("%d/%02d/%02d\n", y, m, d);
	return 0;
}
