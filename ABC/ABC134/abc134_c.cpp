#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int i, n, first, second;
	cin >> n;
	vector<int> v(n);
	int a[n];
	map<int, int> score;

	first = 0;
	second = 0;
	rep(i, n)
	{
		cin >> a[i];
		v.push_back(a[i]);
		score[a[i]]++;
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	first = v.at(0);
	second = v.at(1);
	rep(i, n)
	{
		if (a[i] == first && score[first] == 1)
			cout << second << endl;
		else
			cout << first << endl;
	}
	return 0;
}
