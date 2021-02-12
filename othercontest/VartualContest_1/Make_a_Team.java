import java.util.*;
class Make_a_Team{
  static Scanner scan=new Scanner(System.in);
  static int N=scan.nextInt();
  static int D=scan.nextInt();
  static Integer[] R=new Integer[N];
  static int search(int h){
    for(int i=0;i<R.length;i++){
      if(R[i]==h){
        return i;
      }
    }
    return 0;
  }
  public static void main(String[] args){
    for(int i=0;i<N;i++){
      R[i]=scan.nextInt();
    }
    Arrays.sort(R,Collections.reverseOrder());

    int count=0;
    for(int j=0;j<N-2;j++){
      int a=R[j];
      int h=R[j+2];
      int l=R[N-1];
      do{
        int mid=R[(search(h)+search(l))/2];
        if(a-h<=N){
          h=mid;
        }
        if(a-l>N){
          l=mid;
        }
      }while(a-h<=N&&a-l>N);
      count=search(h)-j+1;
    }
    System.out.println(count);
  }
}