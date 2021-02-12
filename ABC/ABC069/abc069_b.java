import java.util.*;
class abc069_b{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    String[] s=scan.nextLine().split("");
    int count=s.length-2;
    System.out.println(s[0]+count+s[s.length-1]);
  }
}