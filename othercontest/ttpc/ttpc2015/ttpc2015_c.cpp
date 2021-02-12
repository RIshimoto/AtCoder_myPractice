#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	string s;
	bool ok;
	cin >> s;
	ok = true;
	while (ok)
	{
		ok = false;
		rep(i, s.size())
		{
			if (s.substr(i, 8) == "ookayama")
			{
				int tmp = i - 1;
				while(s[tmp] == 'o' && tmp >= 0) tmp--;
				tmp++;
				if (i != tmp) 
				{
					ok = true;
					int j = tmp;
					while(j < i + 2)
					{
						if (s[j] == 'o' && s[j + 1] == 'o')
						{
							s.erase(s.begin() + j);
							s[j] = 'O';
							tmp = j;
							while(s[tmp] == 'O' && tmp >= 0) tmp--;
							int k = tmp;

							while (k <  i + 2)
							{
								if (s[k] == 'O' && s[k + 1] == 'O')
								{
									s.erase(s.begin() + k);
									s[k] = 'o';
									j = tmp;
								}
								k++;
							}
						}
						else
							j++;
					}
				}
			}
		}
	}
	cout << s << endl;
	return 0;
}
