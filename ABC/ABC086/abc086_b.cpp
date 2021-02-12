#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	string a, b;
	int num;

	cin >> a >> b;
	a += b;
	num = stoi(a);
	if ((int)sqrt(num) * (int)sqrt(num) == num)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
