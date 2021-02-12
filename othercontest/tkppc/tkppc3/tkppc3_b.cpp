#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	string s;
	int n, sum, odd, even;
	cin >> s;
	n = s.size();
	sum = 0;
	rep(i, n)
	{
		sum += s[i] - '0'; 
	}
	if ((s[n - 1] - '0') % 2 == 0 && sum % 3 == 0)
		cout << "yES" << endl;
	else
		cout << "nO" << endl; 
	odd = even = 0;
	rep(i, n)
	{
		if (i % 2 == 0)
			odd += s[i] - '0';
		else
			even += s[i] - '0';
	}
	if (odd == even)
		cout << "yES" << endl;
	else
		cout << "nO" << endl;
	return 0;
}
