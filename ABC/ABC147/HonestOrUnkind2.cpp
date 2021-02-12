#include <bits/stdc++.h>
#define For(i, a, b) for(int i = (a); i < (b); i++)
#define rep(i, n) For(i, 0, n) 
using namespace std;
using P = pair<int, int>;

int main()
{
	int n; cin >> n;
	vector<P> a[n];
	int ans;
	bool ok;

	ans = 0;
	rep(i, n)
	{
		int x;
		cin >> x;
		rep(j, x)
		{
			int y, z;
			cin >> y >> z;
			y--;
			P p = make_pair(y, z);
			a[i].push_back(p);
		}
	}
	For(bit, 1, (1 << n))
	{
		set<int> p;
		vector<int> s;
		rep(i, n)
		{
			if (bit & (1LL << i))
			{
				p.insert(i);
				s.push_back(i);
			}
		}
		ok = true;
		rep(k, s.size())
		{
			rep(l, a[s.at(k)].size())
			{
				if(a[s.at(k)].at(l).second == 0)
				{
					if(p.count(a[s.at(k)].at(l).first))
						ok = false;
				}
				else	
				{
					if(!p.count(a[s.at(k)].at(l).first))
						ok = false;
				}
			}
		}
		int sum = p.size();
		if (ok)
			ans = max(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
