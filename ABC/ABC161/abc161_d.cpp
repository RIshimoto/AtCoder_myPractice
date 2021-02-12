#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long k, n;
	queue<long long> q;

	cin >> k;
	for(int i = 1; i < 10; i++) q.push(i);
	rep(i, k)
	{
		n = q.front(); q.pop();
		if (n % 10 != 0)
			q.push(n * 10 + (n % 10 - 1));
		q.push(n * 10 + n % 10);
		if (n % 10 != 9)
			q.push(n * 10 + (n % 10 + 1));
	}
	cout << n << endl;
	return 0;
}
