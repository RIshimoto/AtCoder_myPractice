#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int j, cnt;
	bool I;
	cin >> s;
	cnt = j = 0;
	while(s[j] != 'I' && j < s.size()) j++;
	if (j < s.size())
	{
		cnt = 1;
		I = false;
		for(int i = j + 1; i < s.size(); i++)
		{
			if (!I && s[i] == 'O')
				I = true;
			else if (I && s[i] == 'I')
			{
				cnt += 2;
				I = false;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
