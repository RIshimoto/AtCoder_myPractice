import java.util.*;
class Disjoint_Set_of_Common_Divisors{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    int A=scan.nextInt();
    int B=scan.nextInt();
    int max;
    List<Integer> list=new ArrayList<Integer>();
    if(A>B){
      int tmp=A;
      A=B;
      B=tmp;
    }
    for(int i=1;i<=B;i++){
      if(A%i==0&&B%i==0){
        list.add(i);
      }
    }
    for(int l:list){
      for(int j=2;j<l;j++){
        if(l%j==0){
          int index=list.indexOf(l);
          list.remove(index);
          break;
        }
      }
    }
    max=1;
    for(int l:list){
      if(max<l){
        max=l;
      }
    }
    System.out.println(max);
    }
}