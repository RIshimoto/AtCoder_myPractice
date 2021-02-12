import java.util.*;
class DFS{
  static int H,W;
  static String[][] c;
  static boolean[][] reach; 
  public static void search(int x,int y){
    // System.out.println("x:"+x+" y:"+y);
    if(x<0||H<=x||y<0||W<=y){
      return;
    }
    if(c[x][y].equals("#")){
      return;
    }
  
    if(reach[x][y])return;
    reach[x][y]=true;
    search(x+1,y);
    search(x-1,y);
    search(x,y+1);
    search(x,y-1);
  }
  public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    H=scan.nextInt();
    W=scan.nextInt();
    scan.nextLine();
    c=new String[H][W];
    reach=new boolean[H][W];
    for(int i=0;i<H;i++){
      c[i]=scan.nextLine().split("");
  }
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
        if(c[i][j].equals("s")){
          search(i,j);
        }
      }
    }
    for(int i=0;i<H;i++){
      for(int j=0;j<W;j++){
        if(c[i][j].equals("g")){
          if(reach[i][j]){
            System.out.println("Yes");
          }else{
            System.out.println("No");
          }
        }
      }
    }
    // for(int i=0;i<H;i++){
    //   for(int j=0;j<W;j++){
    //     System.out.print(c[i][j]);
    //   }
    //   System.out.println();
    // }
  }
}