#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) 
{
  if (rest == 0)
    f(indexes);
  else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}

void foreach_comb(int n, int k, std::function<void(int *)> f) 
{
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}
int main(void)
{
	int num_g,num_m,group_g,group_m.choco_num; 
	cin >> girl_N >> man_N >> group_g >> group_m >> choco_num;
	int girl[r],man[r],happy[r]; 
	rep(i, r) cin >> girl[i] >> man[i] >> happy[i];

	for(int i = 
}
