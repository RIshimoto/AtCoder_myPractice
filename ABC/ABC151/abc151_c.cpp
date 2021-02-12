#include<bits/stdc++.h>
using namespace std;

int main(){
  long long n,m; cin >> n >> m;
  long long p[m];
  string s[m];
  for(long long i=0;i<m;i++) cin >> p[i] >> s[i];
  long long correct=0,wrong=0;
  bool flag=true;
  set <int> a;
  map<int,int> tmp_wrong;
  long long focus=p[0];
  for(long long i=0;i<m;i++){
    if(!a.count(p[i])&&s[i]=="WA"){
      tmp_wrong[p[i]]++;
    }else if(!a.count(p[i])&&s[i]=="AC"){
      a.insert(p[i]);
      wrong+=tmp_wrong[p[i]];
      correct++;
    }
  }
  cout << correct << " " << wrong <<endl;
}