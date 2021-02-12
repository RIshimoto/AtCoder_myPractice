#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int a, b;
	string s;

	cin >> a >> b;
	s = "xxxxxxxxxx";	
	rep(i, a) 
	{	
		int p;
		cin >> p;
		s[p] = '.'; 
	}
	rep(i, b)
	{
		int q;
		cin >> q;
		s[q] = 'o';
	}
	cout << s[7] << " "  << s[8] << " " << s[9] << " " << s[0] << endl;
	cout << " " << s[4] << " " << s[5] << " " << s[6] << endl;
	cout << " " << " " << s[2] << " " << s[3] << endl;
	cout << " " << " " << " " << s[1] << endl;
	return 0;
}
