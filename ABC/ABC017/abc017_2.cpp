#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	string s; cin >> s;
	bool flag;

	flag = true; 
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'c' && i != s.size() - 1)
		{
			 if (s[i + 1] != 'h')
				flag = false;
			 else
			 	i++;
		 }
		else if (s[i] != 'o' && s[i] != 'k' && s[i] != 'u')
			flag = false;
	}
	if (flag)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
