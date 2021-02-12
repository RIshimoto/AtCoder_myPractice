#include<bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(void)
{
	int t,n,m;

	cin >> t >> n;
	queue<int> A;
	for (int i = 0; i < n ;i++)
	{
		int a;
		cin >> a;
		A.push(a);
	}
	
	cin >> m;
	queue<int> B;
	for (int i = 0; i < m; i++)
	{
		int b;
		cin >> b;
		B.push(b);
	}
	if (n < m)
	{
		cout << "no" << endl;
		return (0);
	}
	while (A.size() > 0 && B.size() > 0)
	{
		if (A.front() + t < B.front())
			A.pop();
		else if (A.front() > B.front())
		{
			cout << "no" << endl;
			return (0);
		}
		else
		{
			A.pop();
			B.pop();
		}

	}
	if (B.size() == 0) cout << "yes" << endl;
	else cout << "no" << endl;
	return (0);
}
