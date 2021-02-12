#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
	int a, b, c;
	set<int> s;
	cin >> a >> b >> c;
	s.insert(a);
	s.insert(b);
	s.insert(c);
	cout << s.size() << endl;
	return 0;
}
