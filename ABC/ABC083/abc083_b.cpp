#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	int cnt, sum, tmp;

	cin >> n >> a >> b;
	cnt = 0;
	rep(i, n + 1)
	{
		sum = 0;
		tmp = i;
		while(tmp)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		if (sum >= a && sum <= b)
			cnt += i; 
	}
	cout << cnt << endl;
	return 0;
}
