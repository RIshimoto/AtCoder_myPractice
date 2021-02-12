#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	bool ok= false;
	while(n)
	{
		if (n % 10 == 7)
			ok = true;
		n /= 10;
	}
	if(ok)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
