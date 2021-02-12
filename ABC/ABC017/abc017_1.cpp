#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int sum;
	int s[3],e[3]; 

	sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> s[i] >> e[i];
		sum += s[i] * e[i] / 10;
	}
	cout << sum << endl;
}
