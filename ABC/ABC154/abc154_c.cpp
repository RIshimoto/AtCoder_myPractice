#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n;
	set<int> a;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int b;
		cin >> b ;

		if (a.count(b))
		{
			cout << "NO" << endl;
			return 0;
		}
		a.insert(b);
	}
	cout << "YES" << endl;
	return 0;
}
