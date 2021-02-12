#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s,t;
	bool flag;
	cin >> s >> t;
	
	flag = true;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == t[i])
			continue;
		else if (s[i] == '@' && (t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' || t[i] == 'd' || t[i] == 'e' || t[i] == 'r'))
			continue;
		else if (t[i] == '@' && (s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' || s[i] == 'd' || s[i] == 'e' || s[i] == 'r'))
			continue;
		else
			flag = false;
	}
	if (flag)
		cout << "You can win" << endl;
	else
		cout << "You will lose" << endl;
	return (0);
}
