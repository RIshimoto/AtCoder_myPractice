#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	cin >> n;
	string s[5];
	rep(i, 5) cin >> s[i];
	for(int j = 1; j <= n; j++)
	{
		if (s[0].substr(4 * j - 3, 3) == "###")
		{
			if (s[1].substr(4 * j - 3, 3) == "#.#")
			{
				if (s[2].substr(4 * j - 3, 3) == "###")
				{
					if (s[3].substr(4 * j - 3, 3) == "#.#")
						cout << 8;
					else
						cout << 9;
				}
				else
					cout << 0;
			}
			else if (s[1].substr(4 * j - 3, 3) == "..#")
			{
				if (s[2].substr(4 * j - 3, 3) == "###")
				{
					if (s[3].substr(4 * j - 3, 3) == "#..")
						cout << 2;
					if (s[3].substr(4 * j - 3, 3) == "..#")
						cout << 3;
				}
				else
					cout << 7;
			}
			else if (s[1].substr(4 * j - 3, 3) == "#..")
			{
				if (s[3].substr(4 * j - 3, 3) == "..#")
					cout << 5;
				else
					cout << 6;
			}
		}
		else if (s[0].substr(4 * j - 3, 3) == ".#.")
			cout << 1;
		else
			cout << 4;
	}
	cout << endl;
	return 0;
}
