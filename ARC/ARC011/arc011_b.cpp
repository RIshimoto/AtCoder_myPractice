#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	string w[n];
	bool flag;
	rep(i, n)
	{
		cin >> w[i];
		rep(j, w[i].size())
		{
			if (w[i][j] >= 'A' && w[i][j] <= 'Z')
				w[i][j] += 'a' - 'A';
		}
	}
	flag = true;
	rep(i, n)
	{
		vector<int> out;
		rep(j, w[i].size())
		{
			switch(w[i][j])
			{
				case 'b':
				case 'c':
					out.push_back(1);
					break;
				case 'd':
				case 'w':
					out.push_back(2);
					break;
				case 't':
				case 'j':
					out.push_back(3);
					break;
				case 'f':
				case 'q':
					out.push_back(4);
					break;
				case 'l':
				case 'v':
					out.push_back(5);
					break;
				case 's':
				case 'x':
					out.push_back(6);
					break;
				case 'p':
				case 'm':
					out.push_back(7);
					break;
				case 'h':
				case 'k':
					out.push_back(8);
					break;
				case 'n':
				case 'g':
					out.push_back(9);
					break;
				case 'z':
				case 'r':
					out.push_back(0);
					break;
				default:
					continue;
			}
		}
		if (out.size())
		{
			if (!flag)
				cout << ' ';
			rep(j, out.size())
				cout << out[j];
			flag = false;
		}
	}
	cout << endl;
	return 0;
}
