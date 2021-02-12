#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int x;
	long long a, b;

	cin >> x;
	for(int i = -1000; i <= 1000; i++)
	{
		a = pow(i, 5);
		for(int j = -1000; j <= 1000; j++)
		{
			b = pow(j, 5); 
			if (a - b == x)
			{
				cout << i << " " << j << endl;
				return 0;
			}
		}
	}
	return 0;
}
