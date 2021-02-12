#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;
using P = pair<ll, ll>;

signed main(void)
{
	int x;
	cin >> x;
	int i = 1;
	while(x * i % 360 != 0) i++;
	cout << i << endl;
	return 0;
}
