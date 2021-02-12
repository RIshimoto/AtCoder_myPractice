#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

const int MAX = 1e5 + 1;
signed main(void)
{
	int n;
	cin >> n;
	int cnt1, cnt2, cnt3;
	bool ok1, ok2, ok3;
	cnt1 = cnt2 = cnt3 = 0;
	rep(i, n + 1)
	{
		int j = i;
		ok1 = false;
		while (j)
		{
			if (j % 10 == 7)
			{
				ok1 = true;
				cnt1++;
				break;
			}
			j /= 10;
		}
		j = i;
		ok2 = false;
		while (j)
		{
			if (j % 8 == 7)
			{
				ok2 = true;
				cnt2++;
				break;
			}
			j /= 8;
		}
		if (ok1 && ok2)
		{
			cnt3++;
		}
	}
	cout << n - cnt1 - cnt2 + cnt3 << endl;
	return 0;
}
