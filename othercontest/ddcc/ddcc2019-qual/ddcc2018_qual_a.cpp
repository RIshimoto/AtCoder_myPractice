#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	cin >> n;
	cnt = 1;
	rep(i, n) cnt *= 4;
	cout << cnt << endl;
	return 0;
}
