#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n);  i++)
using namespace std;
typedef long long ll;
using P = pair<int, int>;

signed main(void)
{
	ll n;
	vector<char> out;
	cin >> n;
	while(n != 0)
	{
		n--;
		out.push_back('a' + n % 26);
		n /= 26;
	}
	reverse(out.begin(), out.end());
	rep(i, out.size()) cout << out[i];
	cout << endl;
	return 0;
}
