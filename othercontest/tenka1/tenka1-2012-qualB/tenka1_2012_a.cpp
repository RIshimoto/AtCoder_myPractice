#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	for (int i = 1; i <= 127; i++)
	{
		if (i % 3 == a && i % 5 == b && i % 7 == c)
			cout << i << endl;
	}
	return 0;
}
