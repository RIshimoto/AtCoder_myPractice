#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int k, cnt;
	cnt = 0;
	rep(i, 9)
	{
		rep(j, 9)
		{
			if (cnt == 6) 
				cout << '#';
			else
				cout << '.';
			cnt++;
			cnt %= 7;
		}
		cout << endl;
	}
	return 0;
}
