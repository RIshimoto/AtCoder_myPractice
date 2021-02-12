#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

signed main(void)
{
  int a, b, c;
  cin >> a >> b >> c;
  cout << max(max(a + b, b + c), a + c) << endl;
  return 0;
}
