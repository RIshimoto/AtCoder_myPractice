#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n, k, sum, ans;
	cin >> n;
	int a[2][n];

	rep(i, 2) rep(j, n) cin >> a[i][j];
	ans = 0;
	rep(i, n)
	{
		k = 0;
		sum = 0;
		rep(j, n)
		{
			sum += a[k][j];
			if (i == j)
			{
				k = 1;
				sum += a[k][j];
			}
		}
		ans = max(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
