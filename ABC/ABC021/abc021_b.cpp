#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n; cin >> n;
	int a,b; cin >> a >> b;
	int k; cin >> k;
	set<int> s;
	
	s.insert(a);
	s.insert(b);
	rep(i, k)
	{
		int a;
		cin >> a;
		if (s.count(a))
		{
			cout << "NO" << endl;
			return 0;
		}
		s.insert(a);
	}
	cout << "YES" << endl;
}
