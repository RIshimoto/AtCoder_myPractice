#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,Y;
  cin >> n >> Y;

  int x=-1,y=-1,z=-1;
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(10000*i+5000*j+1000*(n-i-j)==Y&&n-i-j>=0){
        x=i;y=j;z=n-i-j;
      }
    }
  }
  cout << x <<" "<< y << " "<< z <<endl;
  return 0;
}