#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, sum;
	cin >> n;
	vector<long long> s(n);

	sum = 0;
	rep(i, n)
	{
		cin >> s[i];
		sum += s[i];
	}
	sort(s.begin(), s.end());
	rep(i, n)
	{
		if (sum % 10 != 0)
			break;
		else
		{
			if (s[i] % 10 != 0)
				sum -= s[i];
		}
	}
	if (sum % 10 == 0)
		cout << 0 << endl;
	else
		cout << sum << endl;
	return 0;
}
