#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int n; cin >> n;
	int min;
	
	min = 100;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (min > a)
			min = a;
	}
	cout << min << endl;
	return (0);
}
