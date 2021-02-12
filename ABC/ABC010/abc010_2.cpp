#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int ans;
	int n; cin >> n;
	int flower[n];

	ans = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> flower[i];
		if (flower[i] % 2 != 0 && flower[i] % 3 != 2)
			continue;
		else
		{
			for (int j = 1; j <= flower[i]; j++)
			{
				if ((flower[i] - j) % 2 != 0 && (flower[i] - j) % 3 != 2)
				{
					ans += j;
					break;
				}
			}
		}
	}
	cout << ans << endl;
}
