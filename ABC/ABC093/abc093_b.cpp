#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, k, cnt;
	cin >> a >> b >> k;
	cnt = 0;
	for(int i = a; i <= b; i++)
	{
		if (cnt < k || cnt > b - a - k)
			cout << i << endl;
		cnt++;
	}
	return 0;
}
