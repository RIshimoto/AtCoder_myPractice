#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n; cin >> n;
	set<int> s;

	rep(i, n)
	{
		int b;
		cin >> b;
		while (b % 2 == 0)
			b /= 2;
		s.insert(b);
	}
	cout << s.size() << endl;
}
