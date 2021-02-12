#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int n;
	cin >> n;
	int m = n / 1000; 
	if (n % 1000 != 0)
		m++;
	cout << m * 1000 - n << endl;
	return 0;
}
