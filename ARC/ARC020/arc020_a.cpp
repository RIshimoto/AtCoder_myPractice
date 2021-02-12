#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	cin >> a >> b;
	if (abs(a) < abs(b))
		cout << "Ant" << endl;
	else if (abs(a) > abs(b))
		cout << "Bug" << endl;
	else
		cout << "Draw" << endl;
	return 0;
}
