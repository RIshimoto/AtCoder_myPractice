import java.util.*;

  class Items{
    private int value,weight;
    Items(int value,int weight){
      this.value=value;
      this.weight=weight;
    }
    public void value_setter(int value){
      this.value=value;
    }
    public void weight_setter(int weight){
      this.weight=weight;
    }
    public int value_getter(){
      return value;
    }
    public int weight_getter(){
      return weight;
    }
  }

class Knapsack1{
  private static int N=0;
  private static int W=0;
  static Items[] item;

  public static void input() {
    Scanner scan = new Scanner(System.in);
    N = scan.nextInt();
    W = scan.nextInt();
    item = new Items[N + 1];
    for (int i = 1; i <= N; i++) {
      item[i] = new Items(0, 0);
      item[i].weight_setter(scan.nextInt());
      item[i].value_setter(scan.nextInt());
    }
  } 
    
    public static int compute(int max){
      final int DIAGONAL = 1;
      final int TOP=0;
      int[][] C=new int[N+1][W+1];
      int[][] G=new int[N+1][W+1];
      for(int j=0;j<=W;j++){
        C[0][j]=0;
        G[0][j]=DIAGONAL;
      }
      for(int i=0;i<=N;i++){
        C[i][0]=0;
      }
      
      for(int i=1;i<=N;i++){
        for(int j=1;j<=W;j++){
          C[i][j]=C[i-1][j];
          G[i][j]=TOP;
          if(item[i].weight_getter()<=j){
            if((item[i].value_getter()+C[i-1][j-item[i].weight_getter()])>C[i-1][j]){
              C[i][j]=item[i].value_getter()+C[i-1][j-item[i].weight_getter()];
              G[i][j]=DIAGONAL;
            }
          }
          else{
            continue;
          }
        }
      }
      for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++){
          System.out.print(C[i][j]+" ");
        }
        System.out.println();
      }

      max=C[N][W];
      for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++){
          if(max<C[i][j]){
            max=C[i][j];
          }
        }
      }
      return max;
    }
  public static void main(String[] args){
    int max=0;
    input();
    System.out.println(compute(max));
  }
}
