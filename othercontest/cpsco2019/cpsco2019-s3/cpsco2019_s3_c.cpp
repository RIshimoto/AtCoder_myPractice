#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

const int MAX = 1e6 + 10;
int imos[MAX];
signed main(void)
{
	int n, mx_n;
	cin >> n;
	long long cnt;
	bool flag;

	rep(i, MAX) imos[i] = 0;
	mx_n = 0;
	rep(i, n)
	{
		int s, t;
		cin >> s >> t;
		mx_n = max(mx_n, t);
		imos[s]++;
		imos[t]--;
	}
	rep(i, MAX)
	{
		imos[i + 1] += imos[i];
	}
	cnt = 0;
	flag = true;
	rep(i, mx_n)
	{
		if (imos[i] == 0)
		{
			if (flag)
			{
				flag = false;
				cnt++;
			}
		}
		else
			flag = true;
	}
	cout << cnt << endl;
	return 0;
}
