#include <bits/stdc++.h>
#define For(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main(void)
{
	int n, d;
	cin >> n >> d;
	int x[n][d];
	int cnt;
	rep(i, n) rep(j, d) cin >> x[i][j];

	cnt = 0;
	rep(i, n - 1) For(j, i + 1, n)
	{
		int sum = 0;
		rep(k, d)
		{
			sum += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
		}
		bool ok = false;
		rep(k, sum + 1)
		{
			if (k * k == sum)
				ok = true;
		}
		if (ok) cnt++;
	}
	cout << cnt << endl;
	return 0;
}

