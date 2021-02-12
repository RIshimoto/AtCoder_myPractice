#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, p, cnt; 
	cin >> n >> p;
	cnt = 0;
	rep(i, n)
	{
		int a;
		cin >> a;
		if (p < a)
			break;
		p -= a;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}
