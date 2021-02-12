#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n, alice, bob;
	vector<int> a;

	cin >> n;
	a.resize(n);
	rep(i, n) cin >> a[i];
	sort(a.rbegin(), a.rend());
	alice = 0;
	bob = 0;
	rep(i, n)
	{
		if (i % 2 == 0)
			alice += a.at(i);
		else
			bob += a.at(i);
	}
	cout << alice - bob << endl;
	return 0;
}
