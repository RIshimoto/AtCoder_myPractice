#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

signed main(void)
{
	int n;
	set<int> st;
	int q[] = {25, 39, 51, 76, 163, 111, 136, 128, 133, 138};
	st.insert(0);
	rep(i, 10)
	{
		vector<int> sum;
		for(auto s : st)
		{
			if (i == 6)
				sum.push_back(s + 58);
			sum.push_back(s + q[i]);
		}
		rep(j, sum.size())
		{
			st.insert(sum[j]);
		}
	}
	for(auto s : st) cout << s << endl; 
	return 0;
}
