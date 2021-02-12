#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m, cnt;
	cin >> n;
	vector<int> c(n);

	rep(i, n) cin >> c[i];
	cnt = 0;
	m = 0;
	do{
		vector<bool> flag(n, false);
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				if (c[j] % c[i] == 0)
					flag[j] = flag[j] ^ 1;
			}
		}
		rep(i, n)
		{
			cout << flag[i]<< " ";
		}
		cout << endl;
		rep(i, n)
		{
			if (!flag[i])
				cnt++;
		}
		m++;
	}while(next_permutation(c.begin(), c.end()));
	cout << fixed << setprecision(12) << (double) cnt / m << endl;
	return 0;
}
