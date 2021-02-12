#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

int main(void)
{
	int n; cin >> n;
	double sum; 
	int ave;

	sum = 0;
	ave = n;
	rep(i, n)
	{
		int a;
		cin >> a;
		if (a == 0)
			ave--;
		sum += a;
	}
	cout << ceil(sum / ave) << endl;
}
