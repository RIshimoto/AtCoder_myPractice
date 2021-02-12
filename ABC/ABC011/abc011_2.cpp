#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') 
			s[i] += 'a' - 'A';
	}
	s[0] -= 'a' - 'A';
	cout << s << endl;
}
