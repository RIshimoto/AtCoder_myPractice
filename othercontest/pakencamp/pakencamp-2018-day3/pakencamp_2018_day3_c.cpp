#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (N); i++)
#define MAX 10000
using namespace std;

signed main(void)
{
	int b, cnt;
	cin >> b;
	vector<int> v(MAX);
	vector<bool> ok(MAX, false);
	cnt = 0;
	for(int i = 2; i <= MAX; i++)
	{
		if (!ok[i])
		{
			int j = i;
			while (j <= b - 1) j *= 1.5;	
			if (j == b)
			{
				j = i;
				while (j < b)
				{
					ok[j] = true;
					j *= 1.5;
					cnt++;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
