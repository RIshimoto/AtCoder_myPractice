import java.util.*;

public class prim{
  private static final int INFTY=100;
  private static final int WHITE=0;
  private static final int GRAY=1;
  private static final int BLACK=2;
  static int[] mincost;
  private int n;
  prim(int n){
    this.n=n;
  }
  public int prim_() {
    int[] u = new int[n];
    int[] color=new int[n];
    int[][] M=new int[n][n];
    int[] d=new int[n];
    mincost=new int[n];

    for (int i = 0; i < n; i++) {
      u[i] = 0;
      color[u] = WHITE;
    }
    d[0] = 0;
    p[0] = 0;
  }
}

class Minimum_Spaninng_Tree {
  public static void main(final String[] args) {
    final Scanner scan = new Scanner(System.in);
    final prim p = new prim();
  }
}