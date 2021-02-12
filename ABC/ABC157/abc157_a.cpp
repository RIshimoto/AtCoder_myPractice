#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n;
  int ans;
  cin >> n;

  if (n % 2 == 0)
  {
    ans = n / 2;
    cout << ans << endl;
  }
  else
  {
    ans = n / 2 + 1;
    cout << ans << endl;
  }
  return 0; 
}