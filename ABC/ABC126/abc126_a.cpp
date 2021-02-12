#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n, k;
	string s;
	cin >> n >> k >> s;
	s[k - 1] += 'a' - 'A';
	cout << s << endl;
	return 0;
}
