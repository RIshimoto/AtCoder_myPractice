#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
const int MAX = 100100;

signed main(void)
{
	int q;
	cin >> q;

	int l, r;
	vector<bool> is_prime(MAX, true);
	vector<int> prime_cnt(MAX, 0);
	int sn = sqrt(MAX);

	is_prime[0] = is_prime[1] = false;
	for (int n = 2; n <= sn; n++)
	{
		if (is_prime[n])
		{
			for (int j = 2; n * j < MAX; j++)
				is_prime[n * j] = false;
		}
	}
	for (int i = 3; i < MAX; i+=2)
	{
		if (is_prime[i] && is_prime[(i + 1) / 2])
			prime_cnt[i] = 1;
	}
	rep(i, MAX) prime_cnt[i + 1] += prime_cnt[i];
	rep(i, q) 
	{
		int l, r;
		cin >> l >> r;
		cout << prime_cnt[r] - prime_cnt[l - 1] << endl;
	}
	return 0;
}
