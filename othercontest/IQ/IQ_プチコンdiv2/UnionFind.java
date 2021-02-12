import java.util.*;
class UnionFind{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    int N=scan.nextInt();
    int Q=scan.nextInt();
    int[] P=new int[Q];
    int[] A=new int[Q];
    int[] B=new int[Q];
    Union_Find uf=new Union_Find(N);
    for(int i=0;i<Q;i++){
      P[i]=scan.nextInt();
      A[i]=scan.nextInt();
      B[i]=scan.nextInt();
      if(P[i]==0){
        uf.unite(A[i],B[i]);
      }
      if(P[i]==1){
        if(uf.same(A[i],B[i])){
          System.out.println("Yes");
        }else{
          System.out.println("No");
        }
      }
    }
  }
}
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