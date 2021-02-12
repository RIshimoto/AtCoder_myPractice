import java.util.*;

class PlacingMarbles{
  public static void main(String[] args){
    int count=0;
    Scanner scan =new Scanner(System.in);
    String[] str=scan.nextLine().split("");
    for(int i=0;i<str.length;i++){
      if(str[i].equals("1")){
        count++;
      }
    }
    System.out.println(count);
  }
}