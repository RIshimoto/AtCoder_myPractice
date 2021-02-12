#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	char board[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char a;
			cin >> a;
			if (a == ' ')
				continue;
			board[i][j] = a;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << board[3 - i][3 - j];
			if (j != 3)
				cout << ' ';
		}
		cout << endl;
	}
	return (0);

}
