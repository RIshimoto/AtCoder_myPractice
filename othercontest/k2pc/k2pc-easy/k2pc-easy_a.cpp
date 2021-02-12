#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b, c, n;
	cin >> a >> b >> c >> n;
	cout << max(0, n - a) << " " << max(0, n * 2 - b) << " " << max(0, n * 3 - c) << endl; 
	return 0;
}
