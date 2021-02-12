#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
	
signed main(void)
{
	int n, k;
	vector<int> out;
	cin >> n >> k;
	int x = n;
	for(int i = 2; i <= sqrt(n); i++)
	{
		while (x % i == 0)
		{
			x /= i;
			out.push_back(i);
		}
	}
	if (x != 1) out.push_back(x);
	sort(out.begin(), out.end());
	if (out.size() < k)
	{
		cout << -1 << endl;
	}
	else
	{
		ll sum = 1;
		rep(i, k - 1)
		{
			sum *= out[i];
			cout << out[i] << endl;	
		}
		cout << n / sum << endl;
	}
	return 0;
}
