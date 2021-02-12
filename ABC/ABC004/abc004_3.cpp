#include <bits/stdc++.h>
using namespace std;

int	main(void)
{
	int card[6] = {1, 2, 3, 4, 5, 6};
	unsigned int n;
	cin >> n;

	n %= 30;
	for (int i = 0; i < n; i++)
		swap(card[i % 5], card[i % 5 + 1]);
	for (int i = 0; i < 6; i++)
		cout << card[i];
	cout << endl;
}
