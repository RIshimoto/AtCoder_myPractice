#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int n;
string s[370];
int m[370], d[370];
void input(void)
{
	bool flag;

	cin >> n;
	rep(i, n)
	{
		cin >> s[i];
		m[i] = d[i] = 0;
	}
	rep(i, n)
	{
		flag = true;
		rep(j, s[i].size())
		{
			if (s[i][j] == '/')
			{
				flag = false;
				continue;
			}
			if (flag)
				m[i] = m[i] * 10 + (s[i][j] - '0'); 
			else
				d[i] = d[i] * 10 + (s[i][j] - '0'); 
		}
	}
}
signed main(void)
{
	bool day[367];
	int ans, cnt;
	input();
	rep(i, 367) day[i] = false;
	//saturday
	for(int i = 0; i <= 366; i+=7)
		day[i] = true;
	//sunday
	for(int i = 1; i <= 366; i+=7)
		day[i] = true;
	rep(i, n)
	{
		int sum = 0;
		for(int j = 1; j < m[i]; j++)
		{
			if (j == 2) 
				sum += 29;
			else if (j == 4 || j == 6 || j == 9 || j == 11)
				sum += 30;
			else
				sum += 31;
		}	
		sum += d[i];
		for(int j = sum; j <= 366; j++)
		{
			if (!day[j])
			{
				day[j] = true;
				break;
			}
		}
	}
	ans = cnt = 0;
	for(int i = 1; i <= 366; i++)
	{
		if (day[i])
		{
			cnt++;
			ans = max(ans, cnt);
		}
		else
			cnt = 0;
	}
	cout << ans << endl;
	return 0;
}
