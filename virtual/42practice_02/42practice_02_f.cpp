#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;

const int mod = 1e9 + 7;
signed main(void)
{
	long long L;
	long long cnt;
	cin >> L;
	cnt = 0;
	for (int l = 5; l <= L; l++) 
	{
		for (int k = 1; l - (2 * k + 1) >= 1; k++)
		{
			int a = k;
			int b = k + 1;
			int c = l - (2 * k + 1)
			if (c < a + b)
				cnt++;
			cnt %= mod;
		}
		for (int k = 3; l - (2 * k - 3) >= 1; k++)
		{
			int a = k - 2;
			int b = k - 1;
			int c = l - (2 * k - 3);
			if (c < a + b)
				cnt++;
			cnt %= mod;
		}
	}
	cout << cnt << endl;
	return 0;
}
