#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	string s; cin >> s;
	int n; cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int a,b; cin >> a >> b;
		string tmp;
		a--;
		b--;
		while (a - b < 0)
		{
			tmp = s.substr(a, 1);
			s.replace(a, 1, s.substr(b, 1));
			s.replace(b, 1, tmp);
			a++;
			b--;
		}
	}
	cout << s << endl;
	return 0;
}
