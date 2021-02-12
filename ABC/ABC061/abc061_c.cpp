#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

const long long MAX = 100000;
long long cnt[MAX + 1];
signed main(void)
{
	long long n, k;
	cin >> n >> k;
	vector<long long> ans(n);

	rep(i, n)
	{
		long long a, b;
		cin >> a >> b;
		cnt[a] += b ;
	}
	rep(i, MAX + 1)
	{
		if (k <= cnt[i])
		{
			cout << i << endl;
			break;
		}
		k -= cnt[i];
	}
	return 0;
}
