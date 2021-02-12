#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, i, j;
	cin >> n;
	i = 1;
	j = 0;
	while(i <= n)
	{
		if ((i + 1) * i / 2 >= n)
		{
			j = (i + 1) * i / 2 - n;	
			break;
		}
		i++;
	}
	for(int k = 1; k <= i; k++)
	{
		if (k == j) continue;
		cout << k << endl;
	}
	return 0;
}
