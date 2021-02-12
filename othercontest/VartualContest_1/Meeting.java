import java.util.*;
class Meeting{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    int N=scan.nextInt();
    int D=scan.nextInt();
    scan.nextLine();
    String[][] S=new String[D][N];
    for(int i=0;i<D;i++){
      S[i]=scan.nextLine().split("");
    }

    int[] person=new int[N];
    int ans=0;
    int max=0;
    for(int i=0;i<D;i++){
      for(int k=i+1;k<D;k++){
        for(int j=0;j<N;j++){
          if(S[i][j].equals("o")||S[k][j].equals("o")){
            ans+=1;
          }
        }
        if(ans>max){
          max=ans;
        }
        ans=0;
      }
    }
    
    System.out.println(max);
  }
}