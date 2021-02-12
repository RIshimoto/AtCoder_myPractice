#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i <  (n); i++)
using namespace std;

int main(void)
{
	string s;
	cin >> s;

	rep(i, s.size())
	{
		if (s[i] == 'a' || s[i] == 'i' || s[i] == 'u' ||\
				s[i] == 'e' || s[i] == 'o')

			continue;
		else
			cout << s[i];
	}
	cout << endl;
	return (0);
}
