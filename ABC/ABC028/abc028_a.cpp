#include <bits/stdc++.h>
#define rep(i, n) for(int i= 0; i < n;i++)
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	if (n <= 59)
		cout << "Bad" << endl;
	else if (n <= 89)
		cout << "Good" << endl;
	else if (n <= 99)
		cout << "Great" << endl;
	else
		cout << "Perfect" << endl;
	return 0;
}
