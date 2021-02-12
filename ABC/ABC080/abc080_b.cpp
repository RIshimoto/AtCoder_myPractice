#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, tmp, sum;
	cin >> n;

	sum = 0;
	tmp = n;
	while (tmp)
	{
		sum += tmp % 10;
		tmp /= 10;
	}
	if (n % sum == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
