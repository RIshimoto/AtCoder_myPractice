#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int x, dan;
	cin >> x;
	dan = 8;
	for (int i = 400; i < 2000; i += 200)
	{
		if (i <= x && x < i + 200)
		{
			cout << dan << endl;
			return 0;
		}	
		dan--;
	}
	return 0;
}
