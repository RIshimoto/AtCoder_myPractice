#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int a, b, c, d, e, time;
	bool flag;
	cin >> a >> b >> c >> d >> e;
	if (a > 0)
		flag = false;
	else if (a < 0)
		flag = true;
	time = 0;
	while (a != b)
	{
		if (flag && a != 0)
		{
			time += c * abs(a);
			a = 0;
		}
		else if (a == 0 && flag)
		{
			flag = false;	
			time += d;
		}
		else if (!flag)
		{
			time += e * (b - a);
			a = b;
		}
	}
	cout << time << endl;
	return 0;
}
