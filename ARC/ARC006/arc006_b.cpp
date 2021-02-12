#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, l;
	int now;
	cin >> n >> l;
	string s[l + 2];

	rep(i, l + 2) getline(cin, s[i]);
	rep(i, s[l + 1].size())
	{
		if (s[l + 1][i] == 'o')
			now = i; 
	}
	for(int i = l; i > 0; i--)
	{
		if (s[i][now - 1] == '-')
			now-=2;
		else if (s[i][now + 1] == '-')
			now+=2;
	}
	cout << now / 2 + 1 << endl;
	return 0;
}
