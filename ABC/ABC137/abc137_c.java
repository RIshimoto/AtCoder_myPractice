import java.util.*;
class abc137_c{
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    int N=scan.nextInt();
    scan.nextLine();
    HashMap<String ,Integer> hashmap=new HashMap<String ,Integer>();
    String[][] S=new String[N][10];
    String[] s=new String[N];
    for(int i=0;i<N;i++){
      S[i]=scan.nextLine().split("");
      Arrays.sort(S[i]);
    }
    long ans=0;
    for(int i=0;i<N;i++){
      for(int j=0;j<10;j++){
        s[i]+=S[i][j];
      }
      hashmap.put(s[i],hashmap.get(s[i])+1);
    }
    for(String nKey:hashmap.keySet()) {
      ans+=hashmap.get(nKey);
    }
    System.out.println(ans);
  }
}