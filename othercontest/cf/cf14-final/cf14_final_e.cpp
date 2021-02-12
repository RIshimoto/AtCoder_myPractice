#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	int r[n];
	int mx, mn, start;
	bool up;
	vector<int> out;

	rep(i, n) cin >> r[i]; 
	mx = mn = r[0];	
	out.push_back(r[0]);
	for(int i = 1; i < n; i++)
	{
		if (r[0] != r[i])
		{
			int tmp = r[0];
			if (r[0] < r[i])
			{
				up = true;
				while(tmp < r[i])
				{
					tmp = r[i];
					i++;
				}
				mx = tmp; 
			}
			else if (r[0] > r[i])
			{
				up = false;
				while (tmp > r[i]) 
				{
					tmp = r[i];
					i++;
				}
				mn = tmp;
			}
			out.push_back(tmp);
			start = i;
			break;
		}
	}
	int i = start;
	while(i < n)
	{
		if (up)
		{
			if (mx > r[i])
			{
				int tmp = mx;
				while (tmp >= r[i]) 
				{
					tmp = r[i];	
					i++;
				}
				out.push_back(tmp);
				mn = tmp;
				up = false;
			}
			else
				i++;
		}
		else 
		{
			if (mn < r[i])
			{
				int tmp = mn;
				while (tmp <= r[i]) 
				{
					tmp = r[i];
					i++;
				}
				out.push_back(tmp);
				mx = tmp;
				up = true;
			}
			else
				i++;
		}
	}
	if (out.size() < 3) 
		cout << 0 << endl;
	else
		cout << out.size() << endl;
	return 0;
}
