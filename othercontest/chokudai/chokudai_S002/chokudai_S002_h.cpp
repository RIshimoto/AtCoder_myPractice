#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		int ans = abs(a - b);
		if (ans <= 0) ans = -1;
		cout << ans << endl;
	}
	return 0;	
}
