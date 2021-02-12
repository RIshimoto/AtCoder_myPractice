#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n;
	int a[n + 1];
	vector<int> out(n + 1, 0);

	m = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = n; i >= 1; i--)
	{
		int sum = 0;
		for(int j = 2; i * j <= n; j++)
		{
			sum += out[i * j];
		}
		if (a[i] == 1)
		{
			if (sum % 2 == 0)
			{
				out[i] = 1;
				m++;
			}
		}
		else if (a[i] == 0)
		{
			if (sum % 2 == 1)
			{
				out[i] = 1;
				m++;
			}
		}
	}
	cout << m << endl;
	rep(i, n + 1)
	{
		if (out[i] == 1)
			printf("%d%c", i, i==n?'\n':' ');
	}
	return 0;
}
