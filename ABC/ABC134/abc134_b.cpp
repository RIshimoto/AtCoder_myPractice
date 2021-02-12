#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, d;
	int i = 1;
	cin >> n >> d;

	while(n > (d * 2 + 1) * i)
		i++;
	cout << i << endl;
	return 0;
}
