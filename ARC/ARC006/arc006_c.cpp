#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, cnt, tab[60];
	
	cin >> n;
	cnt = 0;
	rep(i, n) tab[i] = -1;
	rep(i, n)
	{
		int w;
		cin >> w;	
		rep(j, n)
		{
			if (tab[j] == -1)
			{
				tab[j] = w;
				cnt++;
				break;
			}
			else if (tab[j] >= w)
			{
				tab[j] = w;
				break;
			}
		}
	}	
	cout << cnt << endl;
	return 0;
}
