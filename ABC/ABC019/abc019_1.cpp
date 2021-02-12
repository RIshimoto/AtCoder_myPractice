#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> p(3); for(int i=0;i<3;i++) cin >> p.at(i);
	sort(p.begin(), p.end());
	cout << p.at(1) << endl;
}
