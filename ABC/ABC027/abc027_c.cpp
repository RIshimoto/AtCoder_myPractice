#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

signed main(void)
{
	ll N, n;
	int depth, cnt;

	cin >> N;
	depth = 0;
	for(ll n = N; n > 0; n /= 2)
		depth++;
	cnt = 0;
	n = 1;
	while (cnt < depth && n <= N)
	{
		n *= 2;
		if (depth % 2 == 0)
		{
			if (cnt % 2 != 0)
		 		n++;
		}
		else 
		{
			if (cnt % 2 == 0)
		 		n++;
		}
		cnt++;
	}
	if (cnt % 2 == 0)
		cout << "Takahashi" << endl;
	else
		cout << "Aoki" << endl;
	return 0;
}
