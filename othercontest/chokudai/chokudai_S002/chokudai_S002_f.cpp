#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using P = pair<int, int>;

signed main(void)
{
	int n;
	cin >> n;
	set<P> p;
	rep(i, n)
	{
		int a, b;
		cin >> a >> b;
		if (a > b) swap(a, b);
		p.insert(P(a, b));
	}
	cout << p.size() << endl;	
	return 0;
}
