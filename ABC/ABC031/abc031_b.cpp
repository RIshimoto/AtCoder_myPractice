#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int l, h, n;
	cin >> l >> h >> n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin >> a[i];
	for(int i = 0; i < n; i++)
	{
		if (l > a[i])
			cout << l - a[i] << endl;
		else if (a[i] <= h)
			cout << 0 << endl;
		else
			cout << -1 << endl;
	}
	return 0;
}
