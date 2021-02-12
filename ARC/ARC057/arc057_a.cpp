#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int  k;
	long long a, i;
	cin >> a >> k;
	
	i = 0;
	if (k == 0)
		cout << 2000000000000 - a << endl;
	else
	{
		while(a < 2000000000000)
		{
			a += (1 + k * a);
			i++;
		}
		cout << i << endl;
	}
	return 0;
}
