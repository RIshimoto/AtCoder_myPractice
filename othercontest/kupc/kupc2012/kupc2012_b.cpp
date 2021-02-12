#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	cin >> s;
	if (s[0] == 'o' && s[s.size() - 1] == 'o')
		cout << "o" << endl;
	else if (s[0] == 'x' && s[s.size() - 1] == 'x')
		cout << "x" << endl;
	else
		cout << "o" << endl;
	return 0;
}
