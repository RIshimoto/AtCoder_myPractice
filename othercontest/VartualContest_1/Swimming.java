import java.util.*;
class Swimming{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    int L=scan.nextInt();
    int X=scan.nextInt();
    int count=0;
    while(X>=L){
      X-=L;
      count++;
    }
    if(count%2==0){
      System.out.println(X);
    }else{
      System.out.println(L-X);
    }
  }
}
