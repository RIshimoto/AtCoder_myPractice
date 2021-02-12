#include <bits/stdc++.h>
#define rep(i, n) for(long long i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	deque<char> deq; 
	bool rev;
	long long q, t, f;
	char p;

	cin >> s >> q;
	rev = false;
	for(auto ch: s)
		deq.push_back(ch);
	rep(i, q)
	{
		cin >> t;
		if (t == 1)
			rev = !rev;
		else if (t == 2)
		{
			cin >> f >> p;
			if (rev ^ (f == 2))
				deq.push_back(p);
			else 
				deq.push_front(p);
		}
	}
	if (rev) reverse(deq.begin(), deq.end());
	for (auto ch : deq)
	{
		cout << ch;
	}
	cout << endl;
}
