#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n,x; cin >> n >> x;
	int a[n]; rep(i, n) cin >> a[i];
	int cnt;

	cnt = 0;
	rep(i, n)
	{
		if (x & (1 << i))
			cnt += a[i];
	}
	cout << cnt << endl;
}
