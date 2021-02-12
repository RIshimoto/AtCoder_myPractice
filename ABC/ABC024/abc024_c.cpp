#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n, d, k; cin >> n >> d >> k;
	int l[d], r[d], s[k], t[k];
	int now;
	bool flag[k];

	rep(i, d) cin >> l[i] >> r[i];
	rep(i, k)
	{
		cin >> s[i] >> t[i];
		if (s[i] > t[i])
			flag[i] = true;
		else
			flag[i] = false;
	}
	rep(i, k)
	{
		now = s[i];
		rep(j, d)
		{
			if (l[j] <= now && now <= r[j])
			{
				if (flag[i])
					now = l[j];
				else
					now = r[j];
			}
			if (flag[i] && now <= t[i] || !flag[i] && now >= t[i])
			{
				cout << j + 1 << endl;
				break;
			}
		}
	}
	return 0;
}
