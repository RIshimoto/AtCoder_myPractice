#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n; cin >> n;
	set<char> s;
	rep(i, n) 
	{
		char c;
		cin >> c;
		s.insert(c);
	}
	if (s.size() == 4)
		cout << "Four" << endl;
	if (s.size() == 3)
		cout << "Three" << endl;
	return 0;
}
