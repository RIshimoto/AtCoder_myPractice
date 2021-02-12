#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	cin >> n;
	vector<int> a;
	rep(i, 1 << n) 
	{
		int b;
		cin >> b;
		a.push_back(b);
	}
	while(n > 0)
	{
		vector<int> vec;
		for(int i = 0; i < (1 << n); i+=2)
		{
			vec.push_back(abs(a[i] - a[i + 1]));
		}
		swap(a, vec);
		n--;
	}
	cout << a[0] << endl;
	return 0;
}
