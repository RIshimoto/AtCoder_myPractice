#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s, out;
	int cnt;
	set<char> st;
	vector<char, int> vec;
	cin >> s;
	cnt = 8;
	for(int i = s.size() - 1; i >= 0; i--)
	{
		if (!st.count(s[i]))
		{
			vec.insert(vec.begin(), make_pair(s[i], cnt));
			st.insert(s[i]);
			cnt--;
		}
	}
	int n = vec.size();
	for(int i = n - 1; i >= 0; i--)
	{
		for (int j = vec[i]; i
		{
			out = vec[i].first + out; 	
		}
	}
	cout << out << endl;
	return 0;
}
