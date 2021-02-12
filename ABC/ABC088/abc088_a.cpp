#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, a;
	int ans;
	cin >> n >> a;

	n -= (n / 500) * 500;
	if (n <= a)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
