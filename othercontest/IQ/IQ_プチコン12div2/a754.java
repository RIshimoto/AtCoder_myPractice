import java.util.*;
class a754{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    String[] S=scan.nextLine().split("");
    int[] s=new int[S.length];
    int[] ans=new int[3];
    int min=10,l=0;
    int tmp;
    for(int i=0;i<S.length;i++){
      s[i]=Integer.parseInt(S[i]);
    }
    while(l==3){
      for(int j=0;j<S.length;j++){
        tmp=s[j]-7;
          if(min<tmp){   
            min=tmp;
          }
        }
        if(min<0)
        ans[l++]=min+7;
        else
        ans[l++]=7-min;
      }
      for(int i=0;i<3;i++){
        System.out.print(ans[i]);
      }
    }

}