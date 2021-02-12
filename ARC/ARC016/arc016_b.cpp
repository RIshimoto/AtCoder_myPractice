#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt;
	cin >> n;
	string x[n];
	bool flag;

	cnt = 0;
	flag = true;
	rep(i, n) cin >> x[i];
	rep(i, 9) 
	{
		rep(j, n)
		{
			if (x[j][i] == 'x')
			{
				cnt++;
				flag = true;
			}
			else if (x[j][i] == 'o' && flag)
			{
				cnt++;
				flag = false;
			}
			else if (x[j][i] == '.')
				flag = true;
		}
		flag = true;
	}
	cout << cnt << endl;
	return 0;
}
