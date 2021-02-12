import java.util.*;
class AverageLength{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    int N=scan.nextInt();
    int[] x=new int[N];
    int[] y=new int[N];
    for(int i=0;i<N;i++){
      x[i]=scan.nextInt();
      y[i]=scan.nextInt();
    }
    double ave;
    double sum=0;
    int nowX=0;
    int nowY=0;
    for(int i=0;i<N;i++){
      for(int j=0;j<N;j++){
        if(i==j){
          continue;
        }
        sum+=Math.sqrt((x[i]-nowX)*(x[i]-nowX)+(y[i]-nowY)*(y[i]-nowY));
        nowX=x[i];
        nowY=y[i];
      }
    }
    ave=(double)sum/N;
    System.out.println(ave);
  }
}