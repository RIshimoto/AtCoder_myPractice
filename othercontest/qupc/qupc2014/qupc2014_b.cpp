#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
	int n;
	stack<string> out;
	cin >> n;
	string name[] = {"nil", "un", "bi", "tri", "quad", "pent", "hex",
	"sept", "oct", "enn"};
	if (n % 10 == 2 || n % 10 == 3)
		out.push(name[n % 10] + "um");
	else
		out.push(name[n % 10] + "ium");
	while (n / 10)
	{
		n /= 10;
		if (name[n % 10] == "enn" && (out.top() == "nil" || out.top() == "nilium"))
			out.push("en");
		else
			out.push(name[n % 10]);
	}
	bool ini = true;
	while (!out.empty())
	{
		string s;
		s = out.top();
		if (ini)
		{
			s[0] -= 'a' - 'A';
			ini = false;
		}
		cout << s;
		out.pop();
	}
	cout << endl;
	return 0;
}
