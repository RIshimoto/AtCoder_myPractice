#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	long long n, m;
	string x; 
	bool ok;

	cin >> n >> x;
	for(int i = 2; i <= 10; i++)
	{
		ok = true;
		m = n;
		int j = 1;
		while(m && x.size() - j >= 0)
		{
			if (m % i != x[x.size() - j] - '0')
			{
				ok = false;
				break;
			}
			m /= i;
			j++;
		}
		if (ok)
		{
			cout << i << endl;
			return 0;
		}
	}
	return 0;
}
