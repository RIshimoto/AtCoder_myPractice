#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	set<int> a;

	for(int i = 0; i < s.size(); i++)
		a.insert(s.at(i));
	if (a.size() != 2)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
