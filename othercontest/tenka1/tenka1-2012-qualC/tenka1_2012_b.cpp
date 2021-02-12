#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

vector<int> ctoi(256);
void input(void)
{
	ctoi['A'] = 0;
	ctoi['1'] = 1;
	ctoi['J'] = 2;
	ctoi['Q'] = 3;
	ctoi['K'] = 4;

	ctoi['S'] = 0;
	ctoi['H'] = 1;
	ctoi['D'] = 2;
	ctoi['C'] = 3;
}

signed main(void)
{
	string s;
	vector<string> t;
	queue<string> out;
	bool b[4][5], ok;
	int ans, mx_i;

	input();
	cin >> s;
	rep(i, 4) rep(j, 5) b[i][j] = false;
	for(int i = 0; i < s.size(); i+=2)
	{
		string tmp;
		tmp = s.substr(i, 2);
		if (tmp[1] == '1') 
		{
			tmp += '0';
			i++;
		}
		t.push_back(tmp);
	}
	rep(i, t.size())
	{
		if (!(t[i][1] >= '2' && t[i][1] <= '9'))
		{
			int x, y;
			x = ctoi[t[i][0]];
			y = ctoi[t[i][1]];
			b[x][y] = true;
		}
		rep(j, 4)
		{
			ok = true;
			rep(k, 5)
			{
				if (!b[j][k])
					ok = false;
			}
			if (ok)
			{
				mx_i = i;
				ans = j;
				break;
			}
		}
		if (ok) break;
	}
	if(ok)
	{
		for(int i = 0; i < mx_i; i++)
		{
			int x, y;
			x = ctoi[t[i][0]];
			y = ctoi[t[i][1]];
			if ((t[i][1] >= '2' && t[i][1] <= '9') || x != ans)
				out.push(t[i]);
			else if (!b[x][y])
				out.push(t[i]);
			else
				b[x][y] = false;
		}
	}
	if (out.size())
	{
		while(!out.empty())
		{
			cout << out.front();
			out.pop();
		}
	}
	else
		cout << 0;
	cout << endl;
	return 0;
}
