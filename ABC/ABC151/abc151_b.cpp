#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k,m;cin >> n >> k >> m;
  int a[n];
  int sum=0;
  for(int i=0;i<n-1;i++) {
  cin>>a[i];
  sum+=a[i];
  }
  int ans=-1;
  int tmp=m*n-sum;
  if(tmp<0)tmp=0;
  if(tmp<=k){
    ans=tmp;
  }
  cout << ans <<endl;
}