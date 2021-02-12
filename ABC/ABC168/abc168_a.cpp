#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	n %= 10;
	if (n  == 3)
		cout << "bon" << endl;
	else if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9)
		cout << "hon" << endl;
	else
		cout << "pon" << endl;
	return 0;
}
