#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < n; i++)
using namespace std;

signed main(void)
{
	int n, a, b, cnt, as;
	string s;
	cin >> n >> a >> b >> s;
	cnt = as = 0;
	rep(i, n)
	{
		if (s[i] == 'a')
		{
			if (cnt < a + b)
			{
				cout << "Yes" << endl;
				cnt++;
			}
			else
				cout << "No" << endl;
		}
		else if (s[i] == 'b')
		{
			as++;
			if (cnt < a + b && as <= b)
			{
				cout << "Yes" << endl;
				cnt++;
			}
			else
				cout << "No" << endl;
		}
		else
			cout << "No" << endl;
	}	
	return 0;
}
