#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	long long n;
	cin >> n;
	long long a[n];
	deque<long long> dq;
	bool ok;
	rep(i, n) cin >> a[i];
	ok = false;

	rep(i, n)
	{
		ok ^= 1;
		if (i % 2 == 0)
			dq.push_back(a[i]);
		else
			dq.push_front(a[i]);
	}
	if (ok)
		reverse(dq.begin(), dq.end());
	while(!dq.empty())
	{
		printf("%lld ", dq.front());
		dq.pop_front();
	}
	cout << endl;
	return 0;
}
