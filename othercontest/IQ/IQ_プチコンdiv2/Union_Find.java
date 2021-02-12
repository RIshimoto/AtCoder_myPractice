import java.util.*;
class Union_Find{
  private int[] par;//parent
  private int[] rank;//height of tree
  Union_Find(int n){
    par=new int[n];
    rank=new int[n];
    for(int i=0;i<n;i++){
      par[i]=i;
      rank[i]=1;
    }
  }
  //find root of tree
  int find(int x){
    if(par[x]==x){
      return x;
    }
    else{
      return par[x]=find(par[x]);//tree zipping(press?)
    }
  }
  // marge
  void unite(int x,int y){
    x=find(x);
    y=find(y);
    if(x==y){
      return;
    }
    if(rank[x]==rank[y]){
      par[x]=y;
      rank[x]++;
    }
    //small tree-->big tree
    else if(rank[x]>rank[y]){
      par[y]=x;
    }
    else{
      par[x]=y;
    }
  }
  //same group?
  boolean same(int x,int y){
    return find(x)==find(y);
  }
}