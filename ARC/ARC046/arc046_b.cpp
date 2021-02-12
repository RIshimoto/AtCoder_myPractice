#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	cin >> n >> a >> b;
	if (n <= a)
			cout << "Takahashi" << endl;
	else if (a == b)
	{
		if (n  % (a + 1) == 0)
			cout << "Aoki" << endl;
		else
			cout << "Takahashi" << endl;
	}
	else
	{
		if (a > b)
			cout << "Takahashi" << endl;
		else
			cout << "Aoki" << endl;
	}
	return 0;
}
