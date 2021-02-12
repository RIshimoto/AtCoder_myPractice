import java.util.*;
class Buy_an_Integer{
    public static void main(String[] args){
    Scanner scan=new Scanner(System.in);
    long A=scan.nextLong();
    long B=scan.nextLong();
    long X=scan.nextLong();
    long lowid,midid,highid;
    highid=1000000000;
    lowid=0;
    if(X>(A*highid+B*String.valueOf(highid).length())){
      System.out.println(highid);
    }
    else{
      while(highid>lowid+1){
        midid=(lowid+highid)/2;
        if(X>=((A*midid)+(B*String.valueOf(midid).length()))){
          lowid=midid;
        }      
        else{
          highid=midid;
        }
      }  
      System.out.println(lowid);
    }
  }
}