#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	ll y, n;
	int m, i;
	cin >> y >> m;
	n = y - 2000;
	n = (n - 13) * 12 + m;	
	i = 13;
	while (n > i)
	{
		n -= i;
		i++;
	}
	cout << 2000 + i << " " << n << endl;
	return 0;
}
