#include <bits/stdc++.h>
#include <cassert>
#define rep(i, n) for (int i = 0; i < (n); i++)
#define MAX 999999999
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	int n;
	ll cnt;

	cin >> n;
	cnt = 0;
	for(int i = 1; i <= n; i *= 10)
	{
		cnt += n / (i * 10) * i;
		if (n / i % 10 >= 2)
			cnt += i;
		else if (n / i % 10 == 1)
			cnt += n % i + 1;
	}
	cout << cnt << endl;
	return 0;
}
