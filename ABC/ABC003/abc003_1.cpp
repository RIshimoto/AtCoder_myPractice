#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int x;
	int i;
	double ans;

	cin >> x;
	i = 1;
	ans = 0;
	while (i <= x)
	{
		ans += (double)i * 10000 / x;
		i++;
	}
	cout << ans << endl;
	return (0);
}
