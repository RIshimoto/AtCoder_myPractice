#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, a, b;
	cin >> n >> a >> b;
	n %= (a + b);
	if (n == 0)
		cout << "Bug" << endl;
	else if (n <= a)
		cout << "Ant" << endl; 
	else if (n <= b)
		cout << "Bug" << endl;
	return 0;
}
