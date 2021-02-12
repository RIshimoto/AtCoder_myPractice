#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	set<int> d;
	for (int i = 0; i < n; i++) {int a; cin >> a; d.insert(a);}
	cout << d.size() << endl;
	return 0; 
}
