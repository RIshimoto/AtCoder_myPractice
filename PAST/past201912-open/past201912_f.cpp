#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n, i;
	string s;
	vector<string> vec;

	cin >> s;
	n = s.size();
	i = 0;
	while (i < n)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			int j = i + 1;
			while (j < n && (s[j] >= 'a' && s[j] <= 'z')) j++;
			j++;
			string t = s.substr(i, j - i);
			rep(k, t.size())
			{
				if (t[k] >= 'A' && t[k] <= 'Z')
					t[k] += 'a' - 'A';
			}
			vec.push_back(t);	
			i = j;
		}
	}
	sort(vec.begin(), vec.end());
	rep(i, vec.size()) 
	{
		vec[i][0] -= 'a' - 'A';
		vec[i][vec[i].size() - 1] -= 'a' - 'A';
		cout << vec[i];
	}
	return 0;
}
