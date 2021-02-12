#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int n,k;
bool flag[5][5];
int choice[5];
int t[5][5];

void judge()
{
	int c;

	c = 0;
	for (int i = 0; i < n; i++)
	{
		c ^= choice[i];
	}
	if (c == 0)
	{
		cout << "Found" << endl;
		exit(0);
	}
}

void search(int i)
{
	int j;

	j = 0;
	while (j < k)
	{
		if (!flag[i][j])
		{
			choice[i] = t[i][j];
			if (i == n)
				judge();
			else
			{
				flag[i][j] = true;
				search(i+1);
				flag[i][j] = false;
			}
		}
		j++;
	}
}
int main(void)
{
	cin >> n >> k;
	rep(i, n) rep(j, k) cin >> t[i][j];
	rep(i, 5) rep(j, 5) flag[i][j] = false;
	rep (i, 5) choice[i] = -1;
	search(0);
	cout << "Nothing" << endl;
	return (0);
}
