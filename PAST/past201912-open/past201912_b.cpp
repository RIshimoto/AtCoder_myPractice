#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int a[n];
	rep(i, n) cin >> a[i];
	for(int i = 1; i < n; i++)
	{
		if (a[i - 1] == a[i])
			cout << "stay" << endl;
		else 
		{
			if (a[i - 1] < a[i])
				cout << "up ";
			else if (a[i - 1] > a[i])
				cout << "down ";
			cout << abs(a[i] - a[i - 1]) << endl;
		}
	}
	return 0;
}
