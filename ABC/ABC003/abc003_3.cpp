#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int n,k;
	cin >> n >> k;
	vector<double> r;
	double ans;

	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		r.push_back(a);
	}
	sort(r.begin(), r.end());
	ans = 0;
	for (int i = n - k; i < n; i++) 
		ans = (double)(ans + r.at(i)) / 2;

	printf("%.6f\n", ans);
}
