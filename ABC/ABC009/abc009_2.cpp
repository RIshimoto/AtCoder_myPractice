#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n; cin >> n;
	int a[n];
	int max;
	int max2;

	max = -1;
	max2 = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (max < a[i]) max = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (max != a[i] && a[i] > max2)
			max2 = a[i];
	}
	cout << max2 << endl;
}
