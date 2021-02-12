#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int h,n;
	int i;
	cin >> h >> n;

	i = 0;
	while (n > i++)
	{
		int a;
		cin >> a;
		h -= a;
	}
	if (h <= 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
