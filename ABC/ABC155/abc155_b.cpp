#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;

		if (a % 2 == 0)
			if (!(a % 3 == 0 || a % 5 == 0))
		{
			cout << "DENIED" << endl;
			return 0;
		}
	}
	cout << "APPROVED" << endl;
	return 0;
}
