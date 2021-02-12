import java.util.*;
class caddi2018b_a{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    String[] N=scan.nextLine().split("");
    int count=0;
    for(int i=0;i<4;i++){
      if(N[i].equals("2")){
        count++;
      }
    }
    System.out.println(count);
  }
}