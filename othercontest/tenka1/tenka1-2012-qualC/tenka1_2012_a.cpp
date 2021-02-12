#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;cin >> n;
	bool b[n];
	rep(i, n) b[i] = true;
	b[0] = b[1] = false;
	for (int i = 2; i < sqrt(n); i++) 
	{
		if (b[i])
		{
			for (int j = 0; i * (j + 2) < n; j++)
			{	
				b[i * (j + 2)] = false;
			}
		}
	}
	cnt = 0;
	rep(i, n)
	{
		if (b[i]) cnt++;
	}
	cout << cnt << endl;
	return 0;
}
