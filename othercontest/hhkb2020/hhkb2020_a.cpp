#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i <(n); i++)
using namespace std;
typedef long long ll;
using P=pair<ll, ll>;

signed main(void)
{
	char s, t;
	cin >> s >> t;
	if (s == 'Y')
		t -= ('a' - 'A');
	cout << t << endl;
	return (0);
}
