#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	char c;
	cin >> c;
	if (c == 'A') cout << 'T';
	else if (c == 'T') cout << 'A';
	else if (c == 'C') cout << 'G';
	else if (c == 'G') cout << 'C';
	cout << endl;
	return 0;
}
