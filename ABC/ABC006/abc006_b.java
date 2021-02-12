import java.util.*;

public class abc006_b
{
	public static final int mod = 10007;
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		int[] dp = new int[1000100];
		long ans;
		dp[0] = dp[1] = dp[2] = 0;
		dp[3] = 1;
		for(int i = 4; i <= n; i++)
			dp[i] = ((dp[i - 1] + dp[i - 2]) % mod + dp[i - 3]) % mod;
		System.out.println(dp[n]);
	}
}
