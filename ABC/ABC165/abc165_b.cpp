#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long x, n, cnt;
	cin >> x;
	n = 100;
	cnt = 0;
	while (x > n)
	{
		n *= 1.01;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
