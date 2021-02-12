#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int n;
	cin >> s >> n;
	n %= s.size();
	if (n < 1)
		n += s.size();
	cout << s[n - 1] << endl; 
	return 0;
}
