#include <iostream>
#include <string>

using namespace std;

int N, cnt = 0;
void dfs(string s, char mx)
{
	if (s.length() == N)
	{
		cnt++;
		printf("%s\n", s.c_str());
	}else{
		for(char c = 'a'; c <= mx; c++)
		{
			dfs(s + c, (c == mx) ? (char) (mx + 1) : mx);
		}
	}
}
int main(void)
{
	cin >> N;
	dfs("", 'a');
	cout << cnt << endl;
	return 0;
}
