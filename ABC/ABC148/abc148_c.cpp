#include<bits/stdc++.h>
using namespace std;

int main(){
  long long A,B,r,x,tmp;
  cin >> A >> B;
  if(A<B){
    tmp=A;
    A=B;
    B=tmp;
  }
  x=A*B;
  r=A%B;
  while(r!=0){
    A=B;
    B=r;
    r=A%B;
  }
  cout << x/B << endl;
}