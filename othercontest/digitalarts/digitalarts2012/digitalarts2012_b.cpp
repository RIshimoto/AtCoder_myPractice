#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

ll my_hash(string s)
{
	ll sum;
	sum = 0;
	rep(i, s.size())
	{
		sum += (s[i] - 'a') + 1;
	}
	return sum;
}

signed main(void)
{
	ll h;
	string s, alp, out;

	cin >> s;
	alp = "abcdefghijklmnopqrstuvwxyz";
	h = my_hash(s);
	while (h > 0)
	{
		if (h >= 26)
		{
			h -= 26;
			out += 'z';
		}
		else
		{
			out += alp[h - 1];
			h = 0;
		}
	}
	do{
		if (out != s)
			break;
	}while (next_permutation(out.begin(), out.end()));
	if (out == s)
	{
		if (out.size() >= 1 && out[out.size() - 1] != 'a')
		{
			out[out.size() - 1] = out[out.size() - 1] - 1;
			out += 'a';
		}
		else if (out.size() >= 2 && out[out.size() - 2] != 'a')
		{
			out[out.size() - 2] = out[out.size() - 2] - 1;
			out += 'a';
		}
	}
	if (out.size() <= 20 && out != s)
		cout << out << endl; 
	else
		cout << "NO" << endl;
	return 0;
}
