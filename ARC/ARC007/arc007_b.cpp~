#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, m;
	cin >> n >> m;
	vector<int> disk(n + 1);
	rep(i, n + 1) disk[i] = i;
	rep(i, m)
	{
		int d, tmp;
		cin >> d;
		for(int i = 0; i <= n; i++)
		{
			if (disk[i] == d)
			{
				tmp = i;
				break;
			}
		}
		swap(disk[0], disk[tmp]); 
	}
	for(int i = 1; i <= n; i++)
		cout << disk[i] << endl;
	return 0;
}
