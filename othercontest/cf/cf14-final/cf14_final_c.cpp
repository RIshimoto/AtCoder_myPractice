#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

long long f(int k)
{
	long long ans;
	int n;
	vector<int> v;

	n = k;
	ans = 0;
	while(k)
	{
		v.push_back(k % 10);
		k /= 10;
	}
	reverse(v.begin(), v.end());
	rep(i, v.size())
	{
		ans = ans * n + v[i];
	}
	return ans;
}
signed main(void)
{
	long long n, tmp;
	cin >> n;
	for(int i = 10; i <= 10000; i++)
	{
		tmp = f(i);
		if (tmp == n)
		{
			cout << i << endl;
			return 0;
		}
		else if (tmp > n)
			break;
	}
	cout << -1 << endl;
	return 0;
}
