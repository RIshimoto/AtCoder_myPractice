#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n; cin >> n;
	int max;
	string s;
	map<string, int> name;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		name[s]++;
	}
	max = -1;
	for (auto na : name)
	{
		auto v = na.second;
		if (max < v)
		{
			max = v;
			s = na.first;
		}
	}
	cout << s << endl;
	return (0);
}
