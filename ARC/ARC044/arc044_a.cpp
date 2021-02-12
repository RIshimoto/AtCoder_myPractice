#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, check;
	bool ok;
	cin >> n;
	ok = true;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			ok = false; 
	}
	if (!ok)
	{
		check = n % 10;
		n /= 10;
		if (check % 2 != 0 && check != 5)
			ok = true;
		while (n)
		{
			check += n % 10; 
			n /= 10;
		}
		if (ok && check % 3 != 0)
			ok = true;
		else
			ok = false;
	}
	if (n == 1) ok = false;
	if (ok) 
		cout << "Prime" << endl;
	else
		cout << "Not Prime" << endl;
	return 0;
}
