#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int counter = 0;
int k;
void solve(int x, int y)
{
	if (counter == k)
	{
		cout << x << " " << y << endl;
		return ;
	}
	counter++;
	solve (x + y, x);
}

signed main(void)
{
	cin >> k;
	solve(1, 1);
	return 0;
}
